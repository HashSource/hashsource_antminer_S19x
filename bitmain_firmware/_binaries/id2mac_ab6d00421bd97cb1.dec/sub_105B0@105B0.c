int __fastcall sub_105B0(char *a1, char *a2)
{
  char *v4; // r0
  size_t v5; // r0
  unsigned __int8 *v6; // r0
  unsigned __int8 *v7; // r12
  unsigned int v8; // r2
  int v9; // t1
  unsigned int v10; // r1
  int v11; // t1
  int v12; // lr
  int v13; // r0
  size_t v14; // r3
  int v15; // r5
  int v16; // r2
  int v17; // r12
  int v19; // r1
  int v20; // r2
  int v21; // r3

  v4 = getenv("CPUID");
  if ( !v4 )
  {
    v5 = strlen(a1);
    if ( v5 )
      goto LABEL_3;
LABEL_10:
    v14 = v5;
    v13 = 255;
    v16 = v14;
    v17 = 255;
    v15 = 255;
    v12 = 255;
    return sprintf(a2, "%02x:%02x:%02x:%02x:%02x:%02x", v16, v14, v12, v15, v17, v13);
  }
  v19 = *((_DWORD *)v4 + 1);
  v20 = *((_DWORD *)v4 + 2);
  v21 = *((_DWORD *)v4 + 3);
  *(_DWORD *)a1 = *(_DWORD *)v4;
  *((_DWORD *)a1 + 1) = v19;
  *((_DWORD *)a1 + 2) = v20;
  *((_DWORD *)a1 + 3) = v21;
  v5 = strlen(a1);
  if ( !v5 )
    goto LABEL_10;
LABEL_3:
  v6 = (unsigned __int8 *)&a1[v5];
  v7 = (unsigned __int8 *)a1;
  v8 = 0;
  do
  {
    v9 = *v7++;
    v8 = (unsigned __int16)dword_21040[v9 ^ (v8 >> 8)] ^ (unsigned __int16)((_WORD)v8 << 8);
  }
  while ( v7 != v6 );
  v10 = -1;
  do
  {
    v11 = (unsigned __int8)*a1++;
    v10 = dword_108FC[v11 ^ HIBYTE(v10)] ^ (v10 << 8);
  }
  while ( a1 != (char *)v6 );
  v12 = (unsigned __int8)v10;
  v13 = HIBYTE(v10);
  v14 = v8 >> 8;
  v15 = BYTE1(v10);
  v16 = v8 & 0xFE;
  v17 = BYTE2(v10);
  return sprintf(a2, "%02x:%02x:%02x:%02x:%02x:%02x", v16, v14, v12, v15, v17, v13);
}
