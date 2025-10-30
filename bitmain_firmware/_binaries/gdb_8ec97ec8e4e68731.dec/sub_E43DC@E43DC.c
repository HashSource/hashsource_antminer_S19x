const char ***__fastcall sub_E43DC(const char ***a1, int a2, unsigned __int8 *a3)
{
  char *v3; // r4
  unsigned int *v4; // r4
  unsigned int v5; // r9
  int v6; // r3
  int v7; // r0
  int v8; // r4
  void *v9; // r6
  const char **v10; // r4
  const char ***v11; // r4
  const char *v12; // r4
  size_t v13; // r10
  char *v14; // r6
  char *v15; // r4
  bool v16; // zf
  char *v17; // r0
  unsigned __int8 *v18; // r10
  int v19; // r1
  unsigned __int8 *v20; // r3
  char *v21; // r6
  int v22; // t1
  char *v23; // r0
  char v25[4]; // [sp+0h] [bp-54h] BYREF
  void *v26; // [sp+4h] [bp-50h]
  void (__fastcall *v27)(void *); // [sp+8h] [bp-4Ch] BYREF
  const char *v28; // [sp+Ch] [bp-48h]
  int *v29; // [sp+10h] [bp-44h]
  unsigned int *v30; // [sp+14h] [bp-40h]
  const char ***v31; // [sp+18h] [bp-3Ch]
  unsigned __int8 *v32; // [sp+1Ch] [bp-38h]
  int v33; // [sp+20h] [bp-34h]
  _DWORD *v34; // [sp+24h] [bp-30h]
  const char **v35; // [sp+2Ch] [bp-28h] BYREF

  v3 = (char *)dword_489698;
  v31 = a1;
  *a1 = 0;
  v33 = a2;
  v32 = a3;
  strlen(v3);
  v4 = (unsigned int *)sub_9832C(v3);
  v30 = v4;
  v26 = (void *)sub_25B314();
  if ( v4 && *v4 )
  {
    v29 = &dword_489694;
    v28 = "  Trying %s\n";
    v27 = sub_E4330;
    v5 = 0;
    v34 = v4 + 1;
    do
    {
      v12 = (const char *)v34[1];
      ++v34;
      v13 = strlen(v12);
      memcpy(v25, v12, v13);
      v14 = &v25[v13];
      v15 = (char *)&v27 + v13 + 3;
      v16 = v33 == 0;
      strcpy(&v25[v13], "/.build-id/");
      if ( !v16 )
      {
        v17 = (char *)&v27 + v13 + 3;
        v15 = v14 + 13;
        v18 = v32 + 1;
        sprintf(v17, "%02x", *v32);
        v19 = v33;
        if ( v33 != 1 )
        {
          v20 = v32;
          v15 = v14 + 14;
          v14[13] = 47;
          v21 = (char *)&v20[v19];
          do
          {
            v22 = *v18++;
            v23 = v15;
            v15 += 2;
            sprintf(v23, "%02x", v22);
          }
          while ( v18 != (unsigned __int8 *)v21 );
        }
      }
      v6 = *v29;
      strcpy(v15, ".debug");
      if ( v6 )
        sub_259858(v28, v25);
      if ( !access(v25, 0) )
      {
        v7 = sub_3245D0(v25);
        v8 = v7;
        if ( v7 )
        {
          v9 = sub_9253C((int)v27, v7);
          ((void (__fastcall *)(const char ***, int, int, int))loc_16298C)(&v35, v8, dword_47ACA8, -1);
          v10 = v35;
          if ( *v31 )
            ((void (*)(void))loc_1625A8)();
          *v31 = v10;
          sub_92620(v9);
          v11 = v31;
          if ( *v31 )
          {
            if ( sub_E4358(*v31, v33, v32) )
              break;
            *v11 = 0;
          }
        }
      }
      ++v5;
    }
    while ( v5 < *v30 );
  }
  sub_92620(v26);
  return v31;
}
