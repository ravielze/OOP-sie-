import java.util.ArrayList;
import java.util.stream.Collectors;

public class CompositeService extends AbstractService{

    private ArrayList<AbstractService> serviceList = new ArrayList<AbstractService>();

    public CompositeService(String name) {
        super(name);
    }

    public ArrayList<AbstractService> getServices(){
        return this.serviceList;
    }

    public void addService(AbstractService x){
        if (this.getServiceState() != STATE.DIE){
            this.serviceList.add(x);
        }
    }

    public void removeService(AbstractService x){
        if (this.getServiceState() != STATE.DIE){
            this.serviceList.remove(x);
        }
    }

    @Override
    public void init() {
        this.serviceList.forEach(x -> x.init());
        this.setServiceState(STATE.INIT);
    }

    @Override
    public void start() {
        this.serviceList.forEach(x -> x.start());
        this.setServiceState(STATE.RUNNING);
    }

    @Override
    public void stop() {
        this.setServiceState(STATE.DIE);
        int running = this.serviceList.stream().filter(x -> x.getServiceState() == STATE.RUNNING).collect(Collectors.toList()).size();
        this.serviceList.forEach(x -> x.stop());
        System.out.println("RUNNING service total : " + running);
    }
    
}
