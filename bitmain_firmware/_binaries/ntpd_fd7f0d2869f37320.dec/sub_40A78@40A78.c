int sub_40A78()
{
  int v0; // r3
  int v2; // [sp+4h] [bp-8h]

  v0 = dword_BDB48;
  if ( !dword_BDB48 )
  {
    sub_311C4(2);
    v0 = dword_BDB48;
  }
  dword_BDB48 = v0 + 1;
  return v2;
}
