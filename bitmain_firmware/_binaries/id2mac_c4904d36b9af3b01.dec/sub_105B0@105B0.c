int __fastcall sub_105B0(unsigned __int8 *a1, char *a2)
{
  char *v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  signed int v8; // r0
  unsigned int v9; // r12
  unsigned __int8 *v10; // r0
  unsigned __int8 *v11; // r12
  unsigned int v12; // r3
  int v13; // t1
  int v14; // t1
  __int16 v16; // [sp+12h] [bp-Ah]

  v4 = getenv("CPUID");
  if ( v4 )
  {
    v5 = *((_DWORD *)v4 + 1);
    v6 = *((_DWORD *)v4 + 2);
    v7 = *((_DWORD *)v4 + 3);
    *(_DWORD *)a1 = *(_DWORD *)v4;
    *((_DWORD *)a1 + 1) = v5;
    *((_DWORD *)a1 + 2) = v6;
    *((_DWORD *)a1 + 3) = v7;
  }
  v8 = strlen((const char *)a1);
  if ( v8 > 0 )
  {
    v10 = &a1[v8];
    v11 = a1;
    v12 = 0;
    do
    {
      v13 = *v11++;
      v12 = (unsigned __int16)dword_21134[v13 ^ (v12 >> 8)] ^ (unsigned __int16)((_WORD)v12 << 8);
    }
    while ( v11 != v10 );
    v16 = v12;
    goto LABEL_7;
  }
  if ( !v8 )
    v9 = -1;
  v16 = 0;
  if ( v8 )
  {
    v10 = &a1[v8];
LABEL_7:
    v9 = -1;
    do
    {
      v14 = *a1++;
      v9 = dword_10950[v14 ^ HIBYTE(v9)] ^ (v9 << 8);
    }
    while ( a1 != v10 );
  }
  return sprintf(
           a2,
           "%02x:%02x:%02x:%02x:%02x:%02x",
           v16 & 0xFE,
           HIBYTE(v16),
           (unsigned __int8)v9,
           BYTE1(v9),
           BYTE2(v9),
           HIBYTE(v9));
}
