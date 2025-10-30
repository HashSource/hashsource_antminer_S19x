int __fastcall sub_174598(int a1, int a2, int a3)
{
  int v3; // r4
  int v5; // r3
  _BOOL4 v7; // r3
  unsigned __int8 *v8; // r1
  char *v9; // r12
  int v10; // r3
  char *v11; // r2
  int v12; // r3
  int v13; // r3
  int v14; // r2
  __int16 v15; // r3
  _DWORD *v17; // r0
  int v18; // r3
  __int16 v19; // r2
  int v20; // r3
  _DWORD *v21; // r0
  int v22; // r2
  char *v23; // r2
  __int16 v24; // r0
  _BYTE *v25; // r2
  int v26; // r3
  int v27; // r2
  int v28; // r3
  unsigned int v29; // r2
  unsigned int v30; // r3
  unsigned int v31; // r1
  unsigned int v32; // r3
  char v33; // r2
  unsigned int v34; // r1
  unsigned int v35; // r3
  _DWORD *v36; // r5
  _DWORD *v37; // r4
  int v38; // r0
  __int16 v39; // r0
  int v40; // r1
  int v41; // r0
  int v42; // r0
  int v43; // r5
  int v44; // r4
  int v45; // [sp+Ch] [bp-Ch]

  v3 = a1;
  v5 = **(char **)(a1 + 24);
LABEL_2:
  if ( v5 == 23 )
    v3 = sub_171258((_DWORD *)v3);
  while ( 2 )
  {
    if ( **(_BYTE **)(a2 + 24) == 23 )
      a2 = sub_171258((_DWORD *)a2);
    v7 = (unsigned int)**(unsigned __int8 **)(v3 + 24) - 18 <= 1;
    if ( !a3 )
      v7 = 0;
    if ( v7 )
    {
      v17 = (_DWORD *)nullsub_31(a3);
      v18 = *(_DWORD *)(v3 + 24);
      if ( !*v17 )
      {
        if ( *(_BYTE *)v18 == 19 )
        {
          v19 = 1;
        }
        else
        {
          if ( (*(_DWORD *)(*(_DWORD *)(v18 + 20) + 16) & 1) == 0 )
          {
LABEL_27:
            v45 = 100;
            return (unsigned __int16)v45 | (HIWORD(v45) << 16);
          }
          v19 = 2;
        }
        HIWORD(v45) = v19;
        LOWORD(v45) = 2;
        return (unsigned __int16)v45 | (HIWORD(v45) << 16);
      }
      if ( *(_BYTE *)v18 == 19 )
      {
        v45 = 65538;
        return (unsigned __int16)v45 | (HIWORD(v45) << 16);
      }
    }
    if ( !sub_173DD4((_DWORD *)v3, (_DWORD *)a2) )
    {
      v8 = *(unsigned __int8 **)(a2 + 24);
      if ( (unsigned int)*v8 - 18 <= 1 )
      {
        v40 = *((_DWORD *)v8 + 5);
        v41 = v3;
      }
      else
      {
        v9 = *(char **)(v3 + 24);
        v10 = *v9;
        if ( (unsigned __int8)(v10 - 18) > 1u )
        {
          if ( dword_4877F8 )
          {
            v21 = (_DWORD *)sub_242FB4(0);
            sub_25A418(
              *v21,
              "------ Arg is %s [%d], parm is %s [%d]\n",
              *(const char **)(*(_DWORD *)(a2 + 24) + 8),
              **(char **)(a2 + 24),
              *(const char **)(*(_DWORD *)(v3 + 24) + 8),
              **(char **)(v3 + 24));
            v9 = *(char **)(v3 + 24);
            v10 = *v9;
          }
          switch ( v10 )
          {
            case 1:
              v22 = *(_DWORD *)(a2 + 24);
              switch ( *(_BYTE *)v22 )
              {
                case 1:
                  v38 = *((_DWORD *)v9 + 5);
                  if ( **(_BYTE **)(v38 + 24) == 10 )
                    goto LABEL_60;
                  v39 = sub_173950((_DWORD *)v38, *(_DWORD **)(v22 + 20), 0);
                  if ( v39 < 0 )
                    goto LABEL_27;
                  HIWORD(v45) = v39;
                  LOWORD(v45) = 1;
                  return (unsigned __int16)v45 | (HIWORD(v45) << 16);
                case 2:
                  v36 = (_DWORD *)*((_DWORD *)v9 + 5);
                  v37 = *(_DWORD **)(v22 + 20);
                  if ( !sub_173DD4(v36, v37) )
                    goto LABEL_27;
                  v13 = (v36[4] >> 1) & 1;
                  v14 = (v37[4] >> 1) & 1;
                  if ( (v36[4] & 1) == (v37[4] & 1) )
                    goto LABEL_36;
                  if ( v13 == v14 )
                    v15 = 1;
                  else
                    v15 = 3;
                  goto LABEL_21;
                case 7:
                  v3 = *((_DWORD *)v9 + 5);
                  v5 = **(char **)(v3 + 24);
                  goto LABEL_44;
                case 8:
                  if ( !a3 || **(_BYTE **)(sub_26BC70(a3) + 24) != 8 )
                    goto LABEL_27;
                  if ( !sub_26EB1C(a3) )
                    goto LABEL_60;
                  if ( dword_46D4B4 )
                    goto LABEL_27;
                  goto LABEL_64;
                default:
                  goto LABEL_27;
              }
            case 2:
              v23 = *(char **)(a2 + 24);
              if ( (unsigned int)(*v23 - 1) > 1 )
                goto LABEL_27;
              v3 = *((_DWORD *)v9 + 5);
              a2 = *((_DWORD *)v23 + 5);
              v5 = **(char **)(v3 + 24);
              goto LABEL_44;
            case 3:
              if ( **(_BYTE **)(a2 + 24) != 3 )
                goto LABEL_27;
              v24 = sub_173950((_DWORD *)v3, (_DWORD *)a2, 0);
              if ( v24 < 0 )
                goto LABEL_27;
              HIWORD(v45) = v24;
              LOWORD(v45) = 2;
              return (unsigned __int16)v45 | (HIWORD(v45) << 16);
            case 5:
              v25 = *(_BYTE **)(a2 + 24);
              switch ( *v25 )
              {
                case 5:
                case 8:
                case 0xC:
                case 0x14:
                case 0x15:
                  if ( (v9[2] & 0x20) == 0 )
                    goto LABEL_62;
                  goto LABEL_27;
                case 9:
                  goto LABEL_60;
                default:
                  goto LABEL_27;
              }
            case 7:
              v26 = *(_DWORD *)(a2 + 24);
              if ( *(_BYTE *)v26 != 1 )
                goto LABEL_27;
              a2 = *(_DWORD *)(v26 + 20);
              a3 = 0;
              continue;
            case 8:
              v27 = *(_DWORD *)(a2 + 24);
              switch ( *(_BYTE *)v27 )
              {
                case 1:
                  v45 = 10;
                  return (unsigned __int16)v45 | (HIWORD(v45) << 16);
                case 5:
                case 6:
                case 0xC:
                case 0x14:
                case 0x15:
                  if ( (*(_BYTE *)(v27 + 2) & 0x20) != 0 )
                    goto LABEL_27;
                  goto LABEL_72;
                case 8:
                  v34 = *(_DWORD *)(a2 + 20);
                  v35 = *(_DWORD *)(v3 + 20);
                  if ( v34 != v35 )
                  {
                    if ( v34 >= v35 )
                      goto LABEL_60;
                    goto LABEL_72;
                  }
                  if ( (v9[1] & 2) != 0 )
                  {
                    if ( (*(_BYTE *)(v27 + 1) & 2) != 0 )
                      goto LABEL_40;
                    goto LABEL_60;
                  }
                  if ( (v9[1] & 1) != 0 )
                  {
                    v43 = *(_DWORD *)(v27 + 8);
                    if ( (*(_BYTE *)(v27 + 1) & 1) == 0 )
                      goto LABEL_60;
                    v44 = *((_DWORD *)v9 + 2);
                    if ( sub_15E84(v44, *(_DWORD *)(v27 + 8)) )
                      goto LABEL_40;
                  }
                  else
                  {
                    if ( (*(_BYTE *)(v27 + 1) & 3) != 0 )
                      goto LABEL_60;
                    v44 = *((_DWORD *)v9 + 2);
                    v43 = *(_DWORD *)(v27 + 8);
                    if ( sub_15E84(v44, v43) )
                      goto LABEL_40;
                  }
                  if ( !sub_15E84(v43, (int)"int") || !sub_15E84(v44, (int)"long") )
                    goto LABEL_60;
                  break;
                case 9:
                  goto LABEL_60;
                default:
                  goto LABEL_27;
              }
              goto LABEL_72;
            case 9:
              switch ( **(_BYTE **)(a2 + 24) )
              {
                case 5:
                case 8:
                case 0xC:
                case 0x14:
                case 0x15:
                  goto LABEL_60;
                case 9:
                  v29 = *(_DWORD *)(a2 + 20);
                  v30 = *(_DWORD *)(v3 + 20);
                  if ( v29 < v30 )
                    goto LABEL_72;
                  if ( v29 != v30 )
                    goto LABEL_60;
                  goto LABEL_40;
                default:
                  goto LABEL_27;
              }
            case 11:
              v28 = *(_DWORD *)(a2 + 24);
              if ( *(_BYTE *)v28 != 11 )
                goto LABEL_27;
              v3 = *(_DWORD *)(*((_DWORD *)v9 + 6) + 12);
              a2 = *(_DWORD *)(*(_DWORD *)(v28 + 24) + 12);
              v5 = **(char **)(v3 + 24);
LABEL_44:
              a3 = 0;
              goto LABEL_2;
            case 12:
              switch ( **(_BYTE **)(a2 + 24) )
              {
                case 5:
                case 8:
                case 9:
                case 0xC:
                case 0x14:
                case 0x15:
                  goto LABEL_60;
                default:
                  goto LABEL_27;
              }
            case 20:
              v25 = *(_BYTE **)(a2 + 24);
              switch ( *v25 )
              {
                case 5:
                case 0xC:
                case 0x15:
LABEL_62:
                  if ( (v25[2] & 0x20) != 0 )
                    goto LABEL_27;
                  goto LABEL_60;
                case 8:
                  v31 = *(_DWORD *)(a2 + 20);
                  v32 = *(_DWORD *)(v3 + 20);
                  if ( v31 > v32 )
                    goto LABEL_60;
                  if ( v31 < v32 )
                    goto LABEL_72;
LABEL_67:
                  v33 = v25[1];
                  if ( (v9[1] & 2) != 0 )
                  {
                    if ( (v33 & 2) != 0 )
                      goto LABEL_40;
LABEL_60:
                    v45 = 2;
                    return (unsigned __int16)v45 | (HIWORD(v45) << 16);
                  }
                  if ( (v9[1] & 1) != 0 )
                  {
                    if ( (v33 & 1) == 0 )
                    {
LABEL_72:
                      v45 = 1;
                      return (unsigned __int16)v45 | (HIWORD(v45) << 16);
                    }
                    goto LABEL_40;
                  }
                  if ( (v33 & 3) != 0 )
                    goto LABEL_60;
                  break;
                case 9:
                  goto LABEL_60;
                case 0x14:
                  goto LABEL_67;
                default:
                  goto LABEL_27;
              }
              break;
            case 21:
              switch ( **(_BYTE **)(a2 + 24) )
              {
                case 1:
                case 5:
                case 8:
                case 9:
                case 0x11:
                case 0x14:
LABEL_64:
                  v45 = 3;
                  break;
                case 0x15:
                  goto LABEL_40;
                default:
                  goto LABEL_27;
              }
              return (unsigned __int16)v45 | (HIWORD(v45) << 16);
            case 22:
              v20 = **(char **)(a2 + 24);
              if ( v20 == 9 )
                goto LABEL_72;
              if ( v20 == 22 )
                break;
              goto LABEL_27;
            default:
              goto LABEL_27;
          }
LABEL_40:
          v45 = 0;
          return (unsigned __int16)v45 | (HIWORD(v45) << 16);
        }
        v40 = a2;
        v41 = *((_DWORD *)v9 + 5);
      }
      v42 = sub_174598(v41, v40, 0);
      LOWORD(v45) = v42 + 2;
      HIWORD(v45) = HIWORD(v42);
      return (unsigned __int16)v45 | (HIWORD(v45) << 16);
    }
    break;
  }
  v11 = *(char **)(v3 + 24);
  v12 = *v11;
  if ( v12 == 1 || (unsigned __int8)(v12 - 18) <= 1u )
  {
    v3 = *((_DWORD *)v11 + 5);
    a2 = *(_DWORD *)(*(_DWORD *)(a2 + 24) + 20);
  }
  v13 = (*(_DWORD *)(v3 + 16) >> 1) & 1;
  v14 = (*(_DWORD *)(a2 + 16) >> 1) & 1;
  if ( (*(_DWORD *)(v3 + 16) & 1) == (*(_DWORD *)(a2 + 16) & 1) )
  {
LABEL_36:
    if ( v13 == v14 )
      goto LABEL_40;
    v15 = 2;
  }
  else if ( v13 == v14 )
  {
    v15 = 1;
  }
  else
  {
    v15 = 3;
  }
LABEL_21:
  HIWORD(v45) = v15;
  LOWORD(v45) = 1;
  return (unsigned __int16)v45 | (HIWORD(v45) << 16);
}
