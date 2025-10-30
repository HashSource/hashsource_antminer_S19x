int __fastcall sub_38350(int result)
{
  char v1; // r2

  v1 = *(_BYTE *)(result + 126);
  LOBYTE(word_6E32AC) = *(_BYTE *)(result + 125);
  HIBYTE(word_6E32AC) = v1;
  return result;
}
