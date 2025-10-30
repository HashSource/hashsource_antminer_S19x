int __fastcall sub_288280(int result, int a2, const char *a3)
{
  char *v4; // r1
  int v5; // r10
  int i; // r4
  _BYTE *v8; // r8
  const char *v9; // r1
  __int32_t *v10; // r6
  char *v11; // r3
  _BYTE *v12; // r3
  char *v13; // r2
  size_t v14; // r9
  size_t v15; // r0
  size_t v16; // r8
  const char *v17; // r9
  size_t v18; // r0
  char *v19; // r6
  int v20; // r1
  int v21; // r1
  char *v22; // r0
  char *v23; // [sp+0h] [bp-1Ch]
  char *v24; // [sp+Ch] [bp-10h]

  if ( a3 )
    v4 = (char *)a3;
  else
    v4 = "";
  v5 = result;
  v24 = v4;
  for ( i = 0; i != 257; ++i )
  {
    while ( 1 )
    {
      v14 = *(unsigned __int8 *)(a2 + 8 * i);
      if ( v14 != 1 )
        break;
      if ( !a3 )
      {
        if ( i != 27 )
        {
          v19 = sub_287F28(i);
          goto LABEL_19;
        }
        v16 = 0;
        v22 = (char *)sub_93028(3u);
        v21 = 2;
        v19 = v22;
LABEL_24:
        v19[v16] = 92;
        v19[v14] = 101;
        v19[v21] = 0;
        goto LABEL_19;
      }
      v15 = strlen(a3);
      v16 = v15;
      if ( i == 27 )
      {
        v14 = v15 + 1;
        v19 = (char *)sub_93028(v15 + 3);
        strcpy(v19, a3);
        v21 = v16 + 2;
        goto LABEL_24;
      }
      v17 = sub_287F28(i);
      v18 = strlen(v17);
      v19 = (char *)sub_93028(v16 + 1 + v18);
      strcpy(v19, a3);
      strcpy(&v19[v16], v17);
      sub_297758(v17);
LABEL_19:
      v20 = *(_DWORD *)(a2 + 8 * i++ + 4);
      sub_288280(v5, v20, v19);
      result = sub_297758(v19);
      if ( i == 257 )
        return result;
    }
    if ( v14 == 2 )
    {
      v8 = sub_287F28(i);
      v10 = sub_287C88(*(const char **)(a2 + 8 * i + 4));
      v11 = "";
      if ( v10 )
        v11 = (char *)v10;
      if ( v5 )
        LOWORD(v9) = -10852;
      v23 = v11;
      if ( v5 )
      {
        HIWORD(v9) = 63;
        v12 = v8;
        v13 = v24;
      }
      else
      {
        v12 = v8;
        v13 = v24;
        v9 = "%s%s outputs %s\n";
      }
      fprintf((FILE *)dword_48AAB0, v9, v13, v12, v23);
      sub_297758(v8);
      result = sub_297758(v10);
    }
  }
  return result;
}
