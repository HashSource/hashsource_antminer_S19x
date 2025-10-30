char *__fastcall sub_409B4(char *a1, int a2)
{
  int i; // r9
  int v5; // r6
  char *result; // r0
  int v7; // r3
  int v8; // r1
  int v9; // r0
  int v10; // r2
  int v11; // r5
  int v12; // r3
  int v13; // r1
  int v14; // r12
  int v15; // r2
  char *dest; // [sp+4h] [bp-820h]
  _DWORD v17[5]; // [sp+Ch] [bp-818h] BYREF
  _DWORD v18[512]; // [sp+20h] [bp-804h] BYREF

  for ( i = 1; i != 5; ++i )
  {
    v5 = i - 1;
    if ( sub_26C0C(i - 1) )
    {
      v18[0] = 123;
      memset(&v18[1], 0, 0x7FCu);
      memset(v17, 0, sizeof(v17));
      sprintf((char *)v17, "Chain%d:{", i);
      dest = (char *)stpcpy((char *)v18 + 1, v17);
      if ( a2 <= 0 )
      {
        v7 = 0;
      }
      else
      {
        v7 = 0;
        v8 = dword_4BBB30[0] % 60 - 1;
        v9 = v8 - a2;
        do
        {
          v10 = v8 + (v8 < 0 ? 0x3C : 0);
          --v8;
          v7 += dword_4BBB30[30720 * v5 + 2 + 2 * v10];
        }
        while ( v8 != v9 );
      }
      sprintf((char *)v17, "N%d=%d", 0, v7);
      v11 = 1;
      strcpy(dest, (const char *)v17);
      if ( sub_26A44() > 1 )
      {
        do
        {
          if ( a2 <= 0 )
          {
            v12 = 0;
          }
          else
          {
            v12 = 0;
            v13 = dword_4BBB30[0] % 60 - 1;
            v14 = v13 - a2;
            do
            {
              v15 = v13 + (v13 < 0 ? 0x3C : 0);
              --v13;
              v12 += dword_4BBB30[30720 * v5 + 2 + 120 * v11 + 2 * v15];
            }
            while ( v13 != v14 );
          }
          sprintf((char *)v17, ",N%d=%d", v11++, v12);
          strcat((char *)v18, (const char *)v17);
        }
        while ( v11 < sub_26A44() );
      }
      strcat((char *)v18, "},");
      strcat(a1, (const char *)v18);
    }
  }
  result = &a1[strlen(a1)];
  *(result - 1) = 0;
  return result;
}
