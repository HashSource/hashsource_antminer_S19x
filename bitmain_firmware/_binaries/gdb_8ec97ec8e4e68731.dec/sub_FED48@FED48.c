void __fastcall sub_FED48(const char *a1, _DWORD *a2)
{
  size_t v3; // r0
  size_t *v4; // r12
  size_t v5; // r4
  _DWORD *v6; // r2
  int v7; // r1
  _DWORD *v8; // r2
  bool v9; // zf
  size_t v10; // r3
  int i; // r6
  int v12; // r4
  int v13; // r10
  const char *v14; // r5
  int v15; // r11
  const char **v16; // t1
  int v17; // r0
  char *v18; // r4
  int v19; // r3
  int v20; // r1
  _DWORD *v21; // r0
  _DWORD *v22; // r0
  char *s1; // [sp+Ch] [bp-100h] BYREF
  _DWORD *v25; // [sp+10h] [bp-FCh] BYREF
  size_t v26; // [sp+14h] [bp-F8h]
  _DWORD v27[4]; // [sp+18h] [bp-F4h] BYREF
  int v28; // [sp+28h] [bp-E4h] BYREF
  char v29; // [sp+2Ch] [bp-E0h]
  char v30; // [sp+2Dh] [bp-DFh]
  void *ptr; // [sp+30h] [bp-DCh]
  size_t v32; // [sp+34h] [bp-D8h]
  _DWORD v33[4]; // [sp+38h] [bp-D4h] BYREF
  void *v34; // [sp+48h] [bp-C4h]
  char v35; // [sp+50h] [bp-BCh] BYREF
  char v36; // [sp+64h] [bp-A8h]
  void *v37; // [sp+68h] [bp-A4h]
  char v38; // [sp+70h] [bp-9Ch] BYREF
  char v39; // [sp+80h] [bp-8Ch]
  void *v40; // [sp+84h] [bp-88h]
  char v41; // [sp+8Ch] [bp-80h] BYREF
  char v42; // [sp+9Ch] [bp-70h]
  void *v43; // [sp+A0h] [bp-6Ch]
  char v44; // [sp+A8h] [bp-64h] BYREF
  char v45; // [sp+B8h] [bp-54h]
  int v46; // [sp+F8h] [bp-14h]
  int v47; // [sp+FCh] [bp-10h]
  _DWORD v48[3]; // [sp+100h] [bp-Ch]

  v25 = v27;
  if ( !a1 )
    sub_33D0B8("basic_string::_M_construct null not valid");
  v3 = strlen(a1);
  v5 = v3;
  v28 = v3;
  if ( v3 > 0xF )
  {
    v22 = (_DWORD *)sub_33B2BC(&v25, &v28, 0);
    v25 = v22;
    v27[0] = v28;
  }
  else
  {
    if ( v3 == 1 )
    {
      v6 = v27;
      LOBYTE(v27[0]) = *a1;
      goto LABEL_5;
    }
    if ( !v3 )
    {
      v6 = v27;
      goto LABEL_5;
    }
    v22 = v27;
  }
  v3 = (size_t)memcpy(v22, a1, v5);
  v5 = v28;
  v6 = v25;
LABEL_5:
  v26 = v5;
  *((_BYTE *)v6 + v5) = 0;
  v7 = 1;
  v8 = v25;
  v29 = 0;
  v30 = 0;
  v9 = v25 == v27;
  ptr = v33;
  v28 = 1;
  if ( v25 == v27 )
  {
    v4 = v33;
    v3 = v27[0];
    v7 = v27[1];
    v8 = (_DWORD *)v27[2];
    v10 = v27[3];
  }
  else
  {
    v10 = v27[0];
    ptr = v25;
  }
  if ( v25 == v27 )
  {
    *v4 = v3;
    v4[1] = v7;
    v4[2] = (size_t)v8;
    v4[3] = v10;
  }
  if ( !v9 )
    v33[0] = v10;
  v48[0] = 0;
  v36 = 0;
  v39 = 0;
  v42 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  *(_DWORD *)((char *)v48 + 3) = 0;
  v32 = v26;
  for ( i = sub_C2900(a2, (int)&v28, &v25); i; i = sub_C294C((int)&v28, (int)&v25) )
  {
    if ( *(_DWORD *)(i + 24) )
    {
      v12 = dword_47B1A4;
      if ( dword_47B1A4 <= 0 )
      {
LABEL_28:
        v17 = sub_21B3C4(i);
        sub_FEB54(&s1, v17, (_DWORD *)1);
        v18 = s1;
        if ( s1 )
        {
          if ( !strcmp(s1, a1) )
          {
            v19 = dword_47B1A4;
            v20 = dword_46D41C;
            v21 = (_DWORD *)dword_47B1A8;
            if ( dword_47B1A4 + 2 >= dword_46D41C )
            {
              dword_46D41C *= 2;
              v21 = sub_93050((void *)dword_47B1A8, 8 * v20);
              v19 = dword_47B1A4;
              dword_47B1A8 = (int)v21;
            }
            v21[v19] = i;
            v21[v19 + 1] = 0;
            dword_47B1A4 = v19 + 1;
            free(v18);
          }
          else
          {
            free(v18);
          }
        }
      }
      else
      {
        v13 = 0;
        v14 = *(const char **)i;
        v15 = dword_47B1A8 - 4;
        while ( 1 )
        {
          v16 = *(const char ***)(v15 + 4);
          v15 += 4;
          if ( !strcmp(v14, *v16) )
            break;
          if ( ++v13 == v12 )
            goto LABEL_28;
        }
      }
    }
  }
  if ( v45 )
  {
    v45 = 0;
    if ( v43 != &v44 )
      sub_339E64(v43);
  }
  if ( v42 )
  {
    v42 = 0;
    if ( v40 != &v41 )
      sub_339E64(v40);
  }
  if ( v39 )
  {
    v39 = 0;
    if ( v37 != &v38 )
      sub_339E64(v37);
  }
  if ( v36 )
  {
    v36 = 0;
    if ( v34 != &v35 )
      sub_339E64(v34);
  }
  if ( ptr != v33 )
    sub_339E64(ptr);
}
