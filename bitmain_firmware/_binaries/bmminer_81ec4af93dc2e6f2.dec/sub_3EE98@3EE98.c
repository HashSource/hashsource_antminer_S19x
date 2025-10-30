char *__fastcall sub_3EE98(char *a1, int a2)
{
  int v3; // r6
  int v4; // r8
  char *result; // r0
  int v6; // r3
  int v7; // r2
  int v8; // r0
  int v9; // r1
  int v10; // r5
  int v11; // r6
  int v12; // r3
  int v13; // r2
  int v14; // r0
  int v15; // r1
  char *dest; // [sp+8h] [bp-824h]
  char src[4]; // [sp+14h] [bp-818h] BYREF
  int v19; // [sp+18h] [bp-814h]
  int v20; // [sp+1Ch] [bp-810h]
  int v21; // [sp+20h] [bp-80Ch]
  int v22; // [sp+24h] [bp-808h]
  _DWORD v23[513]; // [sp+28h] [bp-804h] BYREF

  v3 = 0;
  do
  {
    v4 = v3 + 1;
    if ( sub_266F0(v3) )
    {
      v23[0] = 123;
      memset(&v23[1], 0, 0x7FCu);
      *(_DWORD *)src = 0;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      v22 = 0;
      sprintf(src, "Chain%d:{", v3 + 1);
      dest = (char *)stpcpy((char *)v23 + 1, src);
      v6 = 0;
      v7 = dword_4B6CA8 % 60 - 1;
      v8 = v7 - a2;
      do
      {
        v9 = v7 + (v7 < 0 ? 0x3C : 0);
        --v7;
        v6 += dword_4B7E68[30720 * v3 + 2 * v9];
      }
      while ( v7 != v8 );
      sprintf(src, "N%d=%d", 0, v6);
      strcpy(dest, src);
      v10 = 1;
      v11 = 15360 * v3;
      while ( sub_26540() > v10 )
      {
        v12 = 0;
        v13 = dword_4B6CA8 % 60 - 1;
        v14 = v13 - a2;
        do
        {
          v15 = v13 + (v13 < 0 ? 0x3C : 0);
          --v13;
          v12 += dword_4B7E68[120 * v10 + 2 * v11 + 2 * v15];
        }
        while ( v14 != v13 );
        sprintf(src, ",N%d=%d", v10++, v12);
        strcat((char *)v23, src);
      }
      strcat((char *)v23, "},");
      strcat(a1, (const char *)v23);
    }
    v3 = v4;
  }
  while ( v4 != 4 );
  result = &a1[strlen(a1)];
  *(result - 1) = 0;
  return result;
}
