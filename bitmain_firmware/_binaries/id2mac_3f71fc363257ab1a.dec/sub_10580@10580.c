int __fastcall sub_10580(const char *a1, char *a2)
{
  const char *v3; // r5
  size_t v4; // r0
  size_t v5; // r3
  unsigned __int8 *v6; // r12
  unsigned __int8 *v7; // r1
  unsigned int v8; // r3
  int v9; // t1
  unsigned int v10; // r1
  int v11; // t1
  int v12; // r2
  int v13; // r12
  int v14; // r0
  int v15; // lr
  int v16; // r5

  v3 = a1;
  v4 = strlen(a1);
  v5 = v4;
  if ( v4 )
  {
    v6 = (unsigned __int8 *)&v3[v4];
    v7 = (unsigned __int8 *)v3;
    v8 = 0;
    do
    {
      v9 = *v7++;
      v8 = (unsigned __int16)dword_2103C[v9 ^ (v8 >> 8)] ^ (unsigned __int16)((_WORD)v8 << 8);
    }
    while ( v7 != v6 );
    v10 = -1;
    do
    {
      v11 = *(unsigned __int8 *)v3++;
      v10 = dword_10880[v11 ^ HIBYTE(v10)] ^ (v10 << 8);
    }
    while ( v3 != (const char *)v6 );
    v12 = v8 & 0xFE;
    v13 = (unsigned __int8)v10;
    v5 = v8 >> 8;
    v14 = HIBYTE(v10);
    v15 = BYTE1(v10);
    v16 = BYTE2(v10);
  }
  else
  {
    v14 = 255;
    v12 = 0;
    v16 = 255;
    v15 = 255;
    v13 = 255;
  }
  return sprintf(a2, "%02x:%02x:%02x:%02x:%02x:%02x", v12, v5, v13, v15, v16, v14);
}
