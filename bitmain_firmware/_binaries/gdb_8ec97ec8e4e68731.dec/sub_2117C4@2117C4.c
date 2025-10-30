int __fastcall sub_2117C4(char *s2)
{
  _DWORD *v2; // r9
  int *v3; // r5
  _DWORD *v4; // r10
  int *v5; // r8
  int *i; // r6
  int *v7; // r7
  int result; // r0
  int *v9; // r6
  int *v10; // r4
  int v11; // r2
  bool v12; // zf
  int v13; // r8
  int v14; // r5
  int v15; // r0
  int v16; // r2
  int v17; // r10
  unsigned int v18; // r5
  int v19; // r8
  int v20; // r0
  __int64 v21; // r2
  int v22; // r12
  int v23; // r10
  unsigned int v24; // r8
  int v25; // r11
  int v26; // r0
  int v27; // r2
  unsigned int v28; // r11
  int v29; // r10
  _BOOL4 v30; // r10
  int v31; // [sp+4h] [bp-10h]

  if ( !dword_489690 )
    sub_946E0("Overlay debugging not enabled.  Use either the 'overlay auto' or\nthe 'overlay manual' command.");
  if ( !s2 || !*s2 )
    sub_946E0("Argument required: name of an overlay section");
  v2 = *(_DWORD **)(dword_487D2C + 36);
  if ( !v2 )
LABEL_33:
    sub_946E0("No overlay section called %s", s2);
  v3 = (int *)v2[43];
  v4 = *(_DWORD **)(dword_487D2C + 36);
  v5 = (int *)v2[42];
  for ( i = v3; ; i = v7 )
  {
    v7 = v5;
    if ( v5 < i )
      break;
LABEL_28:
    if ( i == v7 )
    {
      v4 = (_DWORD *)*v4;
      if ( !v4 )
        goto LABEL_33;
      v7 = (int *)v4[43];
      v5 = (int *)v4[42];
    }
    else if ( (int *)v4[43] != v7 )
    {
      goto LABEL_33;
    }
  }
  while ( 1 )
  {
    if ( *v7 )
    {
      if ( !strcmp(*(const char **)*v7, s2) )
      {
        result = sub_2117A4(v7);
        if ( result )
          break;
      }
    }
    v7 += 3;
    if ( v7 >= i )
      goto LABEL_28;
  }
  v7[2] = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = (int *)v2[42];
      if ( v9 < v3 )
      {
        v10 = v9 + 3;
        do
        {
          while ( 1 )
          {
            v9 = v10;
            if ( *(v10 - 3) )
            {
              v11 = *(v10 - 1);
              v12 = v11 == 0;
              if ( v11 )
                v12 = v7 == v10 - 3;
              if ( !v12 )
              {
                v13 = *(_DWORD *)(v7[1] + 144);
                v14 = *(_DWORD *)(*v7 + 28);
                v15 = sub_162FDC(*(_DWORD *)(v7[1] + 36), *v7);
                v16 = v7[1];
                v17 = *(_DWORD *)(v16 + 144);
                v18 = v14 + *(_DWORD *)(v13 + 4 * v15);
                v19 = *(_DWORD *)(*v7 + 28) + *(_DWORD *)(*v7 + 36);
                v20 = sub_162FDC(*(_DWORD *)(v16 + 36), *v7);
                v21 = *(_QWORD *)(v10 - 3);
                v22 = *(_DWORD *)(v17 + 4 * v20);
                v23 = *(_DWORD *)(HIDWORD(v21) + 144);
                v24 = v19 + v22;
                v25 = *(_DWORD *)(v21 + 28);
                v26 = sub_162FDC(*(_DWORD *)(HIDWORD(v21) + 36), *(v10 - 3));
                v27 = *(v10 - 2);
                v28 = v25 + *(_DWORD *)(v23 + 4 * v26);
                v29 = *(_DWORD *)(*(v10 - 3) + 28) + *(_DWORD *)(*(v10 - 3) + 36);
                v31 = *(_DWORD *)(v27 + 144);
                result = sub_162FDC(*(_DWORD *)(v27 + 36), *(v10 - 3));
                v30 = v18 < v29 + *(_DWORD *)(v31 + 4 * result);
                if ( v24 <= v28 )
                  v30 = 0;
                if ( v30 )
                  break;
              }
            }
            v3 = (int *)v2[43];
            v10 += 3;
            if ( v3 <= v9 )
              goto LABEL_24;
          }
          if ( dword_48A514 )
            result = sub_259858("Note: section %s unmapped by overlap\n", *(_DWORD *)*(v10 - 3));
          v3 = (int *)v2[43];
          *(v10 - 1) = 0;
          v10 += 3;
        }
        while ( v3 > v9 );
      }
LABEL_24:
      if ( v3 == v9 )
        break;
      v3 = (int *)v2[43];
      if ( v3 != v9 )
        return result;
    }
    v2 = (_DWORD *)*v2;
    if ( !v2 )
      return result;
    v3 = (int *)v2[43];
  }
}
