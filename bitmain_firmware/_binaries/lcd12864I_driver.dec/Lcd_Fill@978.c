int __fastcall Lcd_Fill(char a1)
{
  int v2; // r7
  int v3; // r5
  int v4; // r4
  unsigned __int8 v5; // r6
  int result; // r0

  v2 = 136;
  LOBYTE(v3) = 0x80;
  do
  {
    LOBYTE(v4) = 0x80;
    do
    {
      v5 = v3;
      do
      {
        SendCommad(54);
        SendCommad(v4);
        SendCommad(v5++);
        SendData(a1);
        SendData(a1);
        result = SendCommad(48);
      }
      while ( v2 != v5 );
      v4 = (unsigned __int8)(v4 + 1);
    }
    while ( v4 != 160 );
    v3 = (unsigned __int8)(v3 + 8);
    v2 = (unsigned __int8)(v2 + 8);
  }
  while ( v3 != 144 );
  return result;
}
