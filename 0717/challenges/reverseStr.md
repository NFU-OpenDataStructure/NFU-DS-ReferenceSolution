# Reverse String

請使用遞迴翻轉字串，如現有字串 `"hello"`，則輸出 `"olleh"`。

hint: 遞迴遍歷陣列的一半，依序以當前位置和倒數位置交換，如 `hello` 遍歷會先將 `[h]ello` 與 `hell[o]` 交換，接著交換 `o[e]llh` 和 `oel[l]h`，最後得到反轉的 `olleh`。

## 輸入

每一行有一字串，輸入直到EOF (End of File)

## 輸出

根據每行輸入之字串，輸出反轉後的結果

### Example input

```plain
hello
world

```

### Output

```plain
olleh
dlrow

```
