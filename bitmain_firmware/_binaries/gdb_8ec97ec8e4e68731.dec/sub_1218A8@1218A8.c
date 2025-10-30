int __fastcall sub_1218A8(
        int a1,
        const char **a2,
        int a3,
        int a4,
        void (__fastcall *a5)(int, _BYTE *, int, int, int, int, int, int))
{
  const char *v5; // r1
  char *v6; // r3
  int v7; // r0
  char *v8; // r2
  char v9; // t1
  int v10; // r1
  char v11; // t1
  const char *v12; // r8
  unsigned __int8 v13; // r2
  int result; // r0
  int v15; // r1
  int v16; // r12
  __int64 v17; // r4
  char v18; // t1
  char *v19; // r6
  int v20; // r7
  char *v21; // r9
  __int64 v22; // r4
  int v23; // lr
  int v24; // r0
  char v25; // t1
  unsigned int v26; // r10
  __int64 v27; // r2
  int v28; // r11
  int v29; // lr
  char v30; // t1
  unsigned int v31; // r4
  unsigned __int64 v32; // r2
  int v33; // r1
  const char *v34; // r9
  int v35; // r0
  int v36; // r11
  int v37; // lr
  char v38; // t1
  unsigned int v39; // r4
  int v40; // t1
  unsigned int v41; // r2
  bool v42; // cc
  const char *v43; // r0
  bool v44; // cc
  char *v45; // r0
  _BYTE *v46; // r0
  const char *v47; // r3
  int v48; // r0
  size_t v49; // r0
  bool v50; // cc
  const char *v51; // r0
  const char *v52; // r0
  bool v53; // cc
  int v54; // [sp+4h] [bp-90h]
  int v55; // [sp+8h] [bp-8Ch]
  __int64 v56; // [sp+8h] [bp-8Ch]
  int v57; // [sp+Ch] [bp-88h]
  int v58; // [sp+10h] [bp-84h]
  int v59; // [sp+10h] [bp-84h]
  unsigned int v60; // [sp+1Ch] [bp-78h]
  __int64 i; // [sp+28h] [bp-6Ch]
  int v63; // [sp+3Ch] [bp-58h]
  int v64; // [sp+40h] [bp-54h]
  int v65; // [sp+44h] [bp-50h]
  __int64 v66; // [sp+60h] [bp-34h]
  _BYTE *v67; // [sp+68h] [bp-2Ch]
  char *v68; // [sp+70h] [bp-24h]
  int v72; // [sp+8Ch] [bp-8h] BYREF

  v5 = *a2;
  v6 = (char *)(v5 + 1);
  v60 = *(unsigned __int8 *)v5;
  v68 = (char *)(v5 + 1);
  if ( *v5 )
  {
    v6 = (char *)(v5 + 1);
    v7 = 0;
    do
    {
      v8 = v6;
      do
      {
        v9 = *v8++;
        v10 = v8 - v6;
      }
      while ( v9 < 0 );
      v6 = v8;
      v72 = v10;
      do
        v11 = *v6++;
      while ( v11 < 0 );
      ++v7;
      v72 = v6 - v8;
    }
    while ( v60 > (unsigned __int8)v7 );
  }
  v12 = v6 + 1;
  v13 = *v6 & 0x7F;
  result = v13;
  v66 = v13;
  if ( *v6 < 0 )
  {
    v16 = 0;
    v17 = v13;
    do
    {
      v18 = *v12++;
      v16 += 7;
      result = v18 & 0x7F;
      v15 = v12 - v6;
      LODWORD(v17) = v17 | ((unsigned __int8)result << v16);
      HIDWORD(v17) |= ((unsigned __int8)result << (v16 - 32)) | ((unsigned __int8)result >> (32 - v16));
    }
    while ( v18 < 0 );
    v66 = v17;
  }
  else
  {
    v15 = 1;
  }
  v72 = v15;
  if ( v66 )
  {
    for ( i = 0; i != v66; ++i )
    {
      if ( v60 )
      {
        v19 = v68;
        v20 = 0;
        v64 = 0;
        v67 = 0;
        v65 = 0;
        v63 = 0;
        do
        {
          v21 = v19 + 1;
          v22 = *v19 & 0x7F;
          if ( *v19 < 0 )
          {
            v24 = 0;
            do
            {
              v25 = *v21++;
              v24 += 7;
              v26 = v25 & 0x7F;
              v23 = v21 - v19;
              LODWORD(v22) = v22 | (v26 << v24);
              HIDWORD(v22) |= (v26 << (v24 - 32)) | (v26 >> (32 - v24));
            }
            while ( v25 < 0 );
          }
          else
          {
            v23 = 1;
          }
          v72 = v23;
          v19 = v21 + 1;
          v27 = *v21 & 0x7F;
          if ( *v21 < 0 )
          {
            v29 = 0;
            v58 = v22;
            do
            {
              v30 = *v19++;
              v29 += 7;
              v31 = v30 & 0x7F;
              v28 = v19 - v21;
              LODWORD(v27) = v27 | (v31 << v29);
              HIDWORD(v27) |= (v31 << (v29 - 32)) | (v31 >> (32 - v29));
            }
            while ( v30 < 0 );
            LODWORD(v22) = v58;
          }
          else
          {
            v28 = 1;
          }
          v72 = v28;
          v56 = v27 - 5;
          v32 = v27 - 5;
          if ( v32 > 0x1A )
          {
LABEL_64:
            v53 = (_DWORD)v22 != 1;
            if ( (_DWORD)v22 == 1 )
              v53 = 0;
            if ( v53 )
            {
LABEL_44:
              if ( dword_47AC88 > 0 )
              {
                v45 = sub_98880(v22, SHIDWORD(v22));
                sub_F43B4(&off_46D334, "Unknown format content type %s", v45);
              }
            }
            else
            {
              switch ( (int)v22 )
              {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                  break;
                default:
                  goto LABEL_44;
              }
            }
          }
          else
          {
            switch ( (int)v32 )
            {
              case 0:
                v51 = v12;
                v12 += 2;
                v35 = (*(int (__fastcall **)(const char *))(*(_DWORD *)(a1 + 4) + 52))(v51);
                goto LABEL_40;
              case 1:
                v52 = v12;
                v12 += 4;
                v35 = (*(int (__fastcall **)(const char *))(*(_DWORD *)(a1 + 4) + 40))(v52);
                goto LABEL_40;
              case 2:
                v43 = v12;
                v12 += 8;
                v35 = (*(int (__fastcall **)(const char *))(*(_DWORD *)(a1 + 4) + 28))(v43);
LABEL_40:
                v41 = v22 - 1;
                v44 = (_DWORD)v22 != 1;
                if ( (_DWORD)v22 == 1 )
                  v44 = v41 > 4;
                if ( !v44 )
                  goto LABEL_38;
                goto LABEL_44;
              case 3:
                v47 = (const char *)*(unsigned __int8 *)v12;
                if ( *v12 )
                {
                  v49 = strlen(v12);
                  v47 = v12;
                  v48 = v49 + 1;
                  v72 = v48;
                }
                else
                {
                  v48 = 1;
                  v72 = 1;
                }
                v12 += v48;
                v50 = (_DWORD)v22 != 1;
                if ( (_DWORD)v22 == 1 )
                  v50 = 0;
                if ( v50 )
                  goto LABEL_44;
                switch ( (int)v22 )
                {
                  case 1:
                    v67 = v47;
                    break;
                  case 2:
                  case 3:
                  case 4:
                  case 5:
                    goto LABEL_46;
                  default:
                    goto LABEL_44;
                }
                break;
              case 6:
                v40 = *(unsigned __int8 *)v12++;
                v35 = v40;
                goto LABEL_35;
              case 10:
                v33 = 0;
                v34 = v12 + 1;
                v35 = *v12 & 0x7F;
                if ( *v12 < 0 )
                {
                  v37 = 0;
                  v59 = v22;
                  do
                  {
                    v38 = *v34++;
                    v37 += 7;
                    v39 = v38 & 0x7F;
                    v36 = v34 - v12;
                    v35 |= v39 << v37;
                    v33 |= (v39 << (v37 - 32)) | (v39 >> (32 - v37));
                  }
                  while ( v38 < 0 );
                  LODWORD(v22) = v59;
                }
                else
                {
                  v36 = 1;
                }
                v72 = v36;
                v12 = v34;
LABEL_35:
                v41 = v22 - 1;
                v42 = (_DWORD)v22 != 1;
                if ( (_DWORD)v22 == 1 )
                  v42 = v41 > 4;
                if ( v42 )
                  goto LABEL_44;
LABEL_38:
                switch ( v41 )
                {
                  case 0u:
                  case 4u:
                    goto LABEL_46;
                  case 1u:
                    v63 = v35;
                    break;
                  case 2u:
                    v65 = v35;
                    break;
                  case 3u:
                    v64 = v35;
                    break;
                  default:
                    goto LABEL_44;
                }
                break;
              case 26:
                v46 = sub_12183C((const char **)a1, (int)v12, a4, &v72);
                v12 += v72;
                if ( (unsigned __int64)(v22 - 1) > 4 )
                  goto LABEL_44;
                switch ( (int)v22 )
                {
                  case 1:
                    v67 = v46;
                    break;
                  case 2:
                  case 3:
                  case 4:
                  case 5:
                    goto LABEL_46;
                  default:
                    goto LABEL_44;
                }
                break;
              default:
                goto LABEL_64;
            }
          }
LABEL_46:
          ++v20;
        }
        while ( v60 > (unsigned __int8)v20 );
        a5(a3, v67, v63, v65, v64, v54, v56, HIDWORD(v56));
      }
      else
      {
        a5(a3, 0, 0, 0, 0, v54, v55, v57);
      }
      result = v66;
    }
  }
  *a2 = v12;
  return result;
}
