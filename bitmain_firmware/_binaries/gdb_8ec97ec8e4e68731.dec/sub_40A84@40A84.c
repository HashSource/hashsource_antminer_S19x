int __fastcall sub_40A84(_DWORD *a1)
{
  int v1; // r3

  if ( a1[5] && (v1 = a1[8]) != 0 && (unsigned __int8)v1 == 127 && BYTE1(v1) == 2 )
    a1[8] = 0;
  else
    a1[14] = 1;
  return 0;
}
