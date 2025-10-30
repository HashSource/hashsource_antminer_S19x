void __fastcall sub_C5194(int a1, int a2, const char *a3, char *a4)
{
  char ***v4; // r11
  int v8; // r7
  const char *v9; // r1
  const char *v10; // r3
  int v11; // t1
  const char **v12; // r7
  const char **v13; // r8
  const char **v14; // r0
  const char *v15; // r2
  const char **v16; // r9
  bool v17; // zf
  char **v18; // r0
  char **v19; // r1
  char **v20; // r2
  char **v21; // r3
  int v22; // r2
  char *v23; // r0
  const char *v24; // t1
  _DWORD *v25; // r12
  const char **v26; // r2
  const char **v27; // r3
  const char *v28; // t1
  const char *v29; // t1
  char *v30; // r5
  char *v31; // r6
  _DWORD *v32; // r4
  _DWORD *v33; // r0
  _DWORD *v34; // [sp+4h] [bp-28h] BYREF
  _DWORD *v35; // [sp+8h] [bp-24h]
  _DWORD *v36; // [sp+Ch] [bp-20h]
  char *v37; // [sp+10h] [bp-1Ch] BYREF
  int v38; // [sp+14h] [bp-18h]
  _DWORD v39[5]; // [sp+18h] [bp-14h] BYREF

  v8 = sub_B894C(a1);
  if ( a4 != a3 )
  {
    if ( *(a4 - 1) == 32 )
    {
      a3 = a4;
    }
    else
    {
      v9 = a3;
      v10 = a4 - 1;
      do
      {
        a3 = v10;
        if ( v9 == v10 )
          break;
        v11 = *(unsigned __int8 *)--v10;
      }
      while ( v11 != 32 );
    }
  }
  if ( !strncmp(a3, "g:", 2u) || !strncmp(a3, "group:", 6u) )
  {
    v12 = (const char **)sub_275CB4(v8);
    if ( !v12 )
      return;
    sub_54B80(a2, v12, a4, (int)a4);
  }
  else
  {
    v13 = (const char **)sub_275B60(v8);
    v14 = (const char **)sub_275CB4(v8);
    v15 = *v14;
    v12 = v14;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    if ( v15 )
    {
      v16 = v14;
      do
      {
        v18 = sub_931D8(&v37, "group:%s", v15);
        v25 = v35;
        if ( v35 == v36 )
        {
          sub_C5504(&v34, v35, &v37);
          v23 = v37;
        }
        else
        {
          if ( v35 )
          {
            *v35 = v35 + 2;
            v17 = v37 == (char *)v39;
            if ( v37 == (char *)v39 )
              v4 = (char ***)v39;
            else
              *v25 = v37;
            if ( v17 )
            {
              v18 = *v4;
              v19 = v4[1];
              v20 = v4[2];
              v21 = v4[3];
              v4 += 4;
            }
            else
            {
              v21 = (char **)v39[0];
            }
            v37 = (char *)v39;
            if ( v17 )
              v25[4] = v20;
            v22 = v38;
            if ( v17 )
              v25[2] = v18;
            v23 = (char *)v39;
            if ( v17 )
              v25[5] = v21;
            else
              v25[2] = v21;
            v25[1] = v22;
            if ( v17 )
              v25[3] = v19;
            v38 = 0;
            LOBYTE(v39[0]) = 0;
          }
          else
          {
            v23 = v37;
          }
          v35 = v25 + 6;
        }
        if ( v23 != (char *)v39 )
          sub_339E64(v23);
        v24 = v16[1];
        ++v16;
        v15 = v24;
      }
      while ( v24 );
      if ( *v12 )
      {
        v26 = (const char **)v34;
        v27 = v12;
        do
        {
          v28 = *v26;
          v26 += 6;
          *v27 = v28;
          v29 = v27[1];
          ++v27;
        }
        while ( v29 );
      }
    }
    if ( v13 )
      sub_54B80(a2, v13, a4, (int)a4);
    sub_54B80(a2, v12, a4, (int)a4);
    v30 = (char *)v34;
    v31 = (char *)v35;
    if ( v34 != v35 )
    {
      v32 = v34 + 2;
      do
      {
        v33 = (_DWORD *)*(v32 - 2);
        if ( v33 != v32 )
          sub_339E64(v33);
        v30 += 24;
        v32 += 6;
      }
      while ( v31 != v30 );
      v31 = (char *)v34;
    }
    if ( v31 )
      sub_339E64(v31);
    if ( v13 )
      free(v13);
  }
  free(v12);
}
