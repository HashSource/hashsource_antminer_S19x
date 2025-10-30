int sub_18678()
{
  int v0; // r0
  int v1; // r3
  int v2; // r4

  v0 = sub_179C4();
  LOWORD(v2) = (unsigned __int16)&dword_B3C48;
  if ( v0 <= 0 )
  {
    HIWORD(v2) = 11;
  }
  else
  {
    HIWORD(v2) = (unsigned int)&dword_B3C48 >> 16;
    v1 = 1;
  }
  if ( v0 > 0 )
    *(_DWORD *)(v2 + 0x28) = v1;
  if ( sub_26AF4(v0) > 0 )
    *(_DWORD *)(v2 + 40) = 0;
  if ( sub_27348() <= 0 )
    return *(_DWORD *)(v2 + 40);
  *(_DWORD *)(v2 + 40) = 3;
  return 3;
}
