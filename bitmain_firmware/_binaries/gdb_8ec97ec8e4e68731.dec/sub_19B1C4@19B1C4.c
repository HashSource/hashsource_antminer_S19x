void __fastcall sub_19B1C4(_DWORD *a1, const char *a2, int *a3)
{
  void *v6; // r8
  void *v7; // r7
  int v8; // r2
  int v9; // r7
  int v10; // r3
  char *v11; // r6
  size_t v12; // r0
  char *v13; // r6
  int v14; // r3
  size_t v15; // r0
  size_t v16; // r0
  char *v17; // r3
  int v18; // r2
  char *v19; // r9
  int v20; // r9
  const char *v21; // r9
  _UNKNOWN **v22; // r11
  const char *v23; // r0
  const char *v24; // t1
  char *v25; // [sp+10h] [bp-A4h]
  size_t v26; // [sp+14h] [bp-A0h]
  int v27; // [sp+18h] [bp-9Ch] BYREF
  void *ptr; // [sp+1Ch] [bp-98h] BYREF
  void *v29; // [sp+20h] [bp-94h] BYREF
  _DWORD v30[6]; // [sp+2Ch] [bp-88h] BYREF
  int v31[11]; // [sp+44h] [bp-70h] BYREF
  int v32; // [sp+70h] [bp-44h]
  char *v33; // [sp+74h] [bp-40h]
  int v34[9]; // [sp+78h] [bp-3Ch] BYREF
  int v35; // [sp+9Ch] [bp-18h]
  char *s; // [sp+A0h] [bp-14h]
  int v37; // [sp+A4h] [bp-10h]
  int v38; // [sp+A8h] [bp-Ch]
  _DWORD *v39; // [sp+ACh] [bp-8h]

  sub_195500(v30, 0, (int)off_46D5A4[0], 0, 0, 0, 0);
  v6 = sub_9253C((int)sub_195444, (int)v30);
  v30[0] = a2;
  v34[0] = (int)a3;
  v30[1] = a2;
  v39 = a1;
  v31[10] = 1;
  v7 = sub_92E28();
  sub_19A6E0((int)&v29, (int)v30, a2, a3);
  if ( v29 )
    sub_339E64(v29);
  sub_92E40((int)v7);
  v8 = v37;
  if ( v37 )
  {
    if ( v38 )
    {
      v9 = *(unsigned __int8 *)(v38 + 1);
      if ( !*(_BYTE *)(v38 + 1) )
      {
        v35 = *(unsigned __int8 *)(v38 + 1);
        v37 = v9;
        ptr = (void *)sub_327254(s);
        sub_F6C90(a1, &ptr, v9, (char *)v9, (char *)v9);
        if ( ptr )
          free(ptr);
        v8 = v37;
      }
    }
  }
  v10 = v35;
  a1[21] = v8;
  if ( v10 == 2 )
  {
    v35 = 0;
    sub_197FEC(v31, v34[4], v33, (int)a3, (void **)&v27, &ptr);
    v34[5] = v27;
    v34[6] = (int)ptr;
    sub_196A10(a1, (int)v30, (int)s);
    v11 = s;
  }
  else
  {
    v11 = s;
    if ( v10 == 1 )
    {
      sub_198EE8(v34, (int)a1, s, 1, v32);
      v14 = a1[21];
      v35 = 0;
      if ( v14 )
      {
LABEL_24:
        v11 = s;
        goto LABEL_9;
      }
      if ( a1[17] != a1[18] )
      {
        if ( sub_F54E0((int)a1, v11) )
        {
          v15 = strlen(v11);
          v35 = 4;
          s += v15;
          sub_F5610((int)a1);
        }
        goto LABEL_24;
      }
      v11 = s;
      v16 = strlen(s);
      v26 = v16;
      v25 = &s[v16];
      if ( v11 < &v11[v16] )
      {
        if ( s[v16] == 32 )
        {
          v19 = &s[v16];
LABEL_35:
          v21 = v19 + 1;
          v22 = &off_3C1C7C;
          v23 = "if";
          while ( strncmp(v23, v21, v25 - v21) )
          {
            v24 = (const char *)v22[1];
            ++v22;
            v23 = v24;
            if ( !v24 )
              goto LABEL_30;
          }
          v20 = v21 - v11;
          if ( v20 != -1 )
            goto LABEL_33;
        }
        else
        {
          v17 = &s[v16 - 1];
          while ( 1 )
          {
            v19 = v17;
            if ( s == v17 )
              break;
            v18 = (unsigned __int8)*v17--;
            if ( v18 == 32 )
              goto LABEL_35;
          }
        }
      }
LABEL_30:
      if ( v26 && *(v25 - 1) == 32 )
      {
        v20 = -1;
LABEL_33:
        v11 += v20;
        s = v11;
        v35 = 4;
      }
    }
  }
LABEL_9:
  sub_F59A4((int)a1, v11 - a2);
  sub_198EE8(v34, (int)a1, s, v35, v32);
  if ( !v37 && (unsigned int)v35 <= 2 && a1[17] == a1[18] )
  {
    v12 = strlen(s);
    v13 = &s[v12];
    if ( a2 < &s[v12] && *(v13 - 1) == 32 )
    {
      sub_F59A4((int)a1, v12);
      sub_54B80((int)a1, (const char **)&off_3C1C7C, v13, (int)v13);
    }
  }
  sub_92620(v6);
}
