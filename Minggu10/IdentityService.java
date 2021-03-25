import java.util.ArrayList;

public class IdentityService extends AbstractService {

    private ArrayList<String> identityList = new ArrayList<String>();

    public IdentityService(String name) {
        super(name);
    }

    public ArrayList<String> getIdentity() {
        return this.identityList;
    }

    public void addIdentity(String x){
        if (this.getServiceState() == STATE.RUNNING){
            this.identityList.add(x);
        }
    }

    public void removeIdentity(String x){
        if (this.getServiceState() == STATE.RUNNING){
            this.identityList.remove(x);
        }
    }

    @Override
    public void init() {
        this.setServiceState(STATE.INIT);
    }

    @Override
    public void start() {
        this.setServiceState(STATE.RUNNING);
    }

    @Override
    public void stop() {
        this.setServiceState(STATE.DIE);
    }

    public Boolean isIdentityExist(String x){
        if (this.getServiceState() == STATE.RUNNING){
            return Boolean.valueOf(this.identityList.stream().filter(e -> e.equals(x)).findAny().isPresent());
        } else {
            return null;
        }
    }
    
}
