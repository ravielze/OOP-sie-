import java.io.IOException;
import java.util.List;

public class ChunkLoader implements Runnable {
    private Chunk chunk;
    private CSVReader csv;

    public ChunkLoader(Chunk chunk, String chunkDataFilename) {
        this.chunk = chunk;
        this.csv = new CSVReader(chunkDataFilename, ",");
    }

    @Override
    public void run() {
        try {
            List<String[]> lines = csv.read();
            for (String[] line : lines) {
                try {
                    int x = Integer.valueOf(line[0]);
                    int y = Integer.valueOf(line[1]);
                    this.chunk.addTree(new Position(x, y));
                } catch (NumberFormatException ex) {
                }
            }
        } catch (IOException ignored) {
        }
        // Membaca file dengan nama chunkDataFilename
        // Gunakan class CSVReader.
        // Contoh file chunkDataFilename:
        // x,y
        // 1,18
        // 10,8
        // 6,12
        // Untuk setiap x dan y, tambahkan tree ke Chunk
        // Jika ada IOException pada saat membaca reader, catch Exception
        // tidak ada tree yang ditambahkan pada Chunk (tidak dithrow lagi)
    }
}