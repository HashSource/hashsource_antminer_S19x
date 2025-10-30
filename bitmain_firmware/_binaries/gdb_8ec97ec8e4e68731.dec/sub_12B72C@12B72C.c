int __fastcall sub_12B72C(_DWORD *a1)
{
  char *v1; // r3
  char *v3; // r3
  char v4; // t1
  __int64 v5; // r8
  int v6; // r12
  char v7; // t1
  unsigned int v8; // r6
  int v9; // r4
  __int64 v10; // r0
  int *v11; // r0
  int v12; // r6
  __int64 *v13; // r4
  __int64 *v14; // r7
  int v15; // r10
  __int64 v16; // r0
  int v17; // r9
  char *v19; // lr
  char *v20; // lr
  char v21; // t1
  unsigned __int64 v22; // r0
  int v23; // r12
  char v24; // t1
  unsigned int v25; // r6
  __int64 v26; // r2
  int v27; // r3
  char *v28; // r9
  const char *v29; // r0
  char *v30; // r4
  const char *v31; // r0
  int v32; // r3
  int v33; // r0
  const char *v34; // r4
  const char *v35; // r0
  char *v36; // r9
  const char *v37; // r0
  unsigned __int8 v38; // r1
  int v39; // r3
  int v40; // r3
  __int64 v41; // r2
  __int64 v42; // r2
  __int64 v43; // r2
  int v44; // [sp+0h] [bp-2Ch]
  int v45; // [sp+8h] [bp-24h]
  int v46; // [sp+10h] [bp-1Ch]
  unsigned __int64 v47; // [sp+18h] [bp-14h]
  __int64 v48; // [sp+20h] [bp-Ch] BYREF

  v1 = (char *)a1[5];
  if ( v1 )
  {
LABEL_2:
    v4 = *v1;
    v3 = v1 + 1;
    v5 = v4 & 0x7F;
    if ( v4 < 0 )
    {
      v6 = 0;
      do
      {
        v7 = *v3++;
        v6 += 7;
        v8 = v7 & 0x7F;
        LODWORD(v5) = v5 | (v8 << v6);
        HIDWORD(v5) |= (v8 << (v6 - 32)) | (v8 >> (32 - v6));
      }
      while ( v7 < 0 );
    }
    v48 = v5;
    a1[5] = v3;
    if ( v5 )
    {
      v9 = *a1;
      v10 = sub_347674(v5, *(_DWORD *)(*a1 + 76));
      v11 = sub_124354((_DWORD *)(v9 + 72), SHIDWORD(v10), &v48);
      if ( v11 )
      {
        v12 = *v11;
        if ( *v11 )
        {
          v13 = *(__int64 **)(v12 + 24);
          v14 = *(__int64 **)(v12 + 28);
          if ( v13 == v14 )
            __und(0);
          v15 = 0;
          v45 = 0;
          while ( 1 )
          {
            v16 = v13[1];
            switch ( v16 )
            {
              case 25LL:
                v22 = 1;
                break;
              case 33LL:
                v22 = v13[2];
                break;
              case 15LL:
                v19 = (char *)a1[5];
                HIDWORD(v22) = 0;
                v21 = *v19;
                v20 = v19 + 1;
                LODWORD(v22) = v21 & 0x7F;
                if ( v21 < 0 )
                {
                  v23 = 0;
                  v46 = v12;
                  do
                  {
                    v24 = *v20++;
                    v23 += 7;
                    v25 = v24 & 0x7F;
                    LODWORD(v22) = v22 | (v25 << v23);
                    HIDWORD(v22) |= (v25 << (v23 - 32)) | (v25 >> (32 - v23));
                  }
                  while ( v24 < 0 );
                  v12 = v46;
                }
                a1[5] = v20;
                break;
              default:
                if ( dword_47AC88 <= 0 )
                  return 0;
                v33 = sub_321640(v16);
                if ( v33 )
                  v34 = (const char *)v33;
                else
                  v34 = "DW_FORM_<unknown>";
                v35 = (const char *)sub_1B87A8(*(_DWORD *)(dword_4872D8 + 344));
                sub_F43B4(&off_46D334, "Unsupported .debug_names form %s [in module %s]", v34, v35);
                return 0;
            }
            v26 = *v13;
            if ( *v13 == 2 )
              break;
            if ( (unsigned __int64)*v13 > 2 )
            {
              if ( v26 == 0x2000 )
              {
                v32 = *(unsigned __int8 *)(*a1 + 25);
                if ( *(_BYTE *)(*a1 + 25) )
                  v15 = *(unsigned __int8 *)(*a1 + 25);
                else
                  v32 = v44;
                v44 = v32;
              }
              else if ( v26 == 8193 )
              {
                if ( *(_BYTE *)(*a1 + 25) )
                  v15 = *(unsigned __int8 *)(*a1 + 25);
                v27 = v44;
                if ( *(_BYTE *)(*a1 + 25) )
                  v27 = 0;
                v44 = v27;
              }
              goto LABEL_30;
            }
            if ( v26 == 1 )
            {
              if ( *(int *)(dword_4872D8 + 352) <= v22 )
              {
                if ( dword_47AC88 > 0 )
                {
                  v28 = sub_98880(v22, SHIDWORD(v22));
                  v29 = (const char *)sub_1B87A8(*(_DWORD *)(dword_4872D8 + 344));
                  sub_F43B4(&off_46D334, ".debug_names entry has bad CU index %s [in module %s]", v28, v29);
                }
                goto LABEL_30;
              }
              goto LABEL_41;
            }
LABEL_30:
            v13 += 3;
            if ( v14 == v13 )
            {
              if ( *(_DWORD *)(*(_DWORD *)(v45 + 24) + 4) )
                goto LABEL_32;
              if ( v15 )
              {
                v38 = v44;
                if ( a1[2] )
                  v38 = v44 ^ 1;
                if ( (v38 & (_BYTE)a1[1]) != 0 )
                  goto LABEL_32;
              }
              v39 = a1[3];
              switch ( v39 )
              {
                case 2:
                  v43 = *(_QWORD *)(v12 + 16);
                  if ( v43 != 19 && v43 != 22 )
                    goto LABEL_32;
                  break;
                case 4:
                  v42 = *(_QWORD *)(v12 + 16);
                  if ( v42 && v42 != 52 )
                    goto LABEL_32;
                  break;
                case 1:
                  v47 = *(_QWORD *)(v12 + 16) - 19LL;
                  if ( v47 <= 0x21 )
                  {
                    switch ( (int)v47 )
                    {
                      case 0:
                      case 3:
                      case 27:
                      case 33:
                        goto LABEL_61;
                      default:
                        break;
                    }
                  }
LABEL_32:
                  v1 = (char *)a1[5];
                  goto LABEL_2;
                default:
                  break;
              }
LABEL_61:
              v40 = a1[4];
              if ( v40 == 1 )
              {
                if ( *(_QWORD *)(v12 + 16) != 46 )
                  goto LABEL_32;
              }
              else if ( v40 )
              {
                if ( v40 == 2 )
                {
                  v41 = *(_QWORD *)(v12 + 16);
                  if ( v41 != 19 && v41 != 22 )
                    goto LABEL_32;
                }
              }
              else if ( *(_QWORD *)(v12 + 16) != 52 )
              {
                goto LABEL_32;
              }
              return v45;
            }
          }
          if ( *(int *)(dword_4872D8 + 356) <= v22 )
          {
            if ( dword_47AC88 > 0 )
            {
              v36 = sub_98880(v22, SHIDWORD(v22));
              v37 = (const char *)sub_1B87A8(*(_DWORD *)(dword_4872D8 + 344));
              sub_F43B4(&off_46D334, ".debug_names entry has bad TU index %s [in module %s]", v36, v37);
            }
            goto LABEL_30;
          }
          LODWORD(v22) = *(_DWORD *)(dword_4872D8 + 352) + v22;
LABEL_41:
          v45 = ((int (__fastcall *)(_DWORD))loc_11E164)(v22);
          goto LABEL_30;
        }
      }
      if ( dword_47AC88 > 0 )
      {
        v30 = sub_98880(v5, SHIDWORD(v5));
        v17 = 0;
        v31 = (const char *)sub_1B87A8(*(_DWORD *)(dword_4872D8 + 344));
        sub_F43B4(&off_46D334, "Wrong .debug_names undefined abbrev code %s [in module %s]", v30, v31);
        return v17;
      }
    }
  }
  return 0;
}
