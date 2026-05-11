package j061.service;

public interface ICRUD {
    // 인터페이스를 활용해 WordCRUD 클래스에서 필수로 구현해야 하는 함수를 정의함.
    public void addWord();
    public void editWord();
    public void listWord();
    public void deleteWord();
}
