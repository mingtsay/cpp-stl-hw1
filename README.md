# 作業一：Writing a Test Plan for the First STL Program

- 課程：泛型程式設計與標準模板函式庫
- 授課老師：王國華
- 組員：蔡璨名、林鈺庭

## macOS/Linux

### 下載

    git clone https://github.com/mingtsay/cpp-stl-hw1.git
    cd cpp-stl-hw1

### 編譯

    mkdir cmake-build-debug
    cd cmake-build-debug
    cmake .. && make
    cd ..

### 執行

- 產生隨機字串：`./run-random.sh`
- 執行排序測試：`./run-sort.sh`
- 整理執行結果：`php run-result.php`

## Windows

- 使用 CLion 編輯器開啟專案，並選擇 `Build` > `Build All`
- 至專案目錄下依序執行批次檔案：
    - 產生隨機字串：`1 - 產生隨機字串.bat`
    - 執行排序測試：`2 - 執行測試.bat`
    - 整理執行結果：`3 - 整理測試結果.php`
