char *__fastcall sub_2236C(char *a1, int a2)
{
  int v2; // r5
  int v3; // r6
  char *v4; // r9
  int v5; // r3
  int v6; // r2
  int v7; // r0
  int v8; // r1
  int v9; // r10
  int v10; // r5
  int v11; // r3
  int v12; // r2
  int v13; // r0
  int v14; // r1
  int v15; // r2
  char *result; // r0
  int v19; // [sp+Ch] [bp-820h]
  char src[4]; // [sp+14h] [bp-818h] BYREF
  int v21; // [sp+18h] [bp-814h]
  int v22; // [sp+1Ch] [bp-810h]
  int v23; // [sp+20h] [bp-80Ch]
  int v24; // [sp+24h] [bp-808h]
  _DWORD v25[513]; // [sp+28h] [bp-804h] BYREF

  v2 = 0;
  do
  {
    while ( 1 )
    {
      v3 = v2 + 1;
      if ( *(_DWORD *)(dword_A0D68 + 4 * v2 + 4) == 1 )
        break;
      ++v2;
      if ( v3 == 16 )
        goto LABEL_13;
    }
    v25[0] = 123;
    memset(&v25[1], 0, 0x7FCu);
    *(_DWORD *)src = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    sprintf(src, "Chain%d:{", v2 + 1);
    v4 = (char *)stpcpy((char *)v25 + 1, src);
    v5 = 0;
    v6 = dword_A0D6C % 60 - 1;
    v7 = v6 - a2;
    do
    {
      v8 = v6 + (v6 < 0 ? 0x3C : 0);
      --v6;
      v5 += dword_A4DC8[9360 * v2 + 2 * v8];
    }
    while ( v7 != v6 );
    sprintf(src, "N%d=%d", 0, v5);
    strcpy(v4, src);
    if ( *(unsigned __int8 *)(dword_A0D68 + 12955) > 1u )
    {
      v19 = v2 + 1;
      v9 = 4680 * v2;
      v10 = 1;
      do
      {
        v11 = 0;
        v12 = dword_A0D6C % 60 - 1;
        v13 = v12 - a2;
        do
        {
          v14 = v12 + (v12 < 0 ? 0x3C : 0);
          --v12;
          v11 += dword_A4DC8[120 * v10 + 2 * v9 + 2 * v14];
        }
        while ( v13 != v12 );
        v15 = v10++;
        sprintf(src, ",N%d=%d", v15, v11);
        strcat((char *)v25, src);
      }
      while ( *(unsigned __int8 *)(dword_A0D68 + 12955) > v10 );
      v3 = v19;
    }
    v2 = v3;
    strcat((char *)v25, "},");
    strcat(a1, (const char *)v25);
  }
  while ( v3 != 16 );
LABEL_13:
  result = &a1[strlen(a1)];
  *(result - 1) = 0;
  return result;
}
