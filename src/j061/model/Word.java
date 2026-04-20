package j061.model;

public class Word {
    private String english;
    private String korean;
    private int level;

    // 생성자
    public Word(String english, String korean, int level) {
        this.english = english;
        this.korean = korean;
        this.level = level;
    }

    // Setter
    public void setEnglish(String english) { this.english = english; }
    public void setKorean(String korean) { this.korean = korean; }
    public void setLevel(int level) { this.level = level; }

    // Getter
    public String getEnglish() { return english; }
    public String getKorean() { return korean; }
    public int getLevel() { return level; }

    // 멤버의 내용을 문자열로 리턴하는 toString()
    @Override
    public String toString() {
        return String.format("%-12s %s (난이도: %d)", english, korean, level);
    }
}