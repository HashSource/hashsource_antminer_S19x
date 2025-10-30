int __fastcall sub_294F5C(int a1, int a2)
{
  int v2; // r2
  int v3; // r8
  int v4; // r5
  int *v5; // r7
  int v6; // r4
  char *v7; // r0
  int v8; // r1
  int v9; // r2

  if ( a1 <= a2 )
    v2 = a2;
  else
    v2 = a1;
  if ( a1 > a2 )
    a1 = a2;
  if ( dword_4900DC < v2 )
  {
    v3 = dword_4900DC;
    if ( a1 >= dword_4900DC )
      a1 = dword_4900DC;
  }
  else
  {
    v3 = v2;
  }
  v4 = a1 & ~(a1 >> 31);
  LOWORD(v5) = (unsigned __int16)&dword_48AAD4;
  v6 = v3 - v4;
  v7 = sub_2912A8(v4, v3);
  if ( dword_4900DC - (v3 - v4) > v4 )
  {
    v8 = v4;
    HIWORD(v5) = (unsigned int)&dword_48AAD4 >> 16;
    do
    {
      *(_BYTE *)(*v5 + v8) = *(_BYTE *)(*v5 + v8 + v6);
      ++v8;
    }
    while ( dword_4900DC - v6 > v8 );
  }
  else
  {
    HIWORD(v5) = (unsigned int)&dword_48AAD4 >> 16;
  }
  if ( dword_48B6E4 )
    sub_297758(v7);
  else
    sub_292374(0, v4, v3, (int)v7);
  v9 = *v5;
  dword_4900DC -= v6;
  *(_BYTE *)(v9 + dword_4900DC) = 0;
  return v3 - v4;
}
