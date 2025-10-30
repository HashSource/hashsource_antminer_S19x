int __fastcall sub_EC124(int a1, int a2, int a3, int a4, void *a5, int a6, _DWORD *a7)
{
  int v11; // r10
  int v12; // r0
  int v13; // r2
  int v14; // r4
  int v16; // r7
  int v17; // r9
  int v18; // r0
  int v19; // r0
  void *v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r3
  int v24; // r8
  bool v25; // zf
  int v26; // r6
  int v27; // r0
  int v28; // r7
  int v29; // r9
  int v30; // r0
  int v31; // r1
  bool v32; // zf
  int v33; // r0
  char *v34; // r4
  int v35; // r0
  int v36; // r0
  int v37; // r1
  _BOOL4 v38; // r3
  int v39; // r0
  int v40; // r3
  int v41; // r6
  int v42; // r8
  unsigned int v43; // r4
  int v44; // r9
  unsigned int v45; // r3
  bool v46; // zf
  _BOOL4 v47; // r2
  int v48; // [sp+18h] [bp-7Ch]
  int v49; // [sp+20h] [bp-74h]
  int v50; // [sp+20h] [bp-74h]
  unsigned int v51; // [sp+24h] [bp-70h]
  int v52; // [sp+28h] [bp-6Ch]
  int v53; // [sp+2Ch] [bp-68h]
  unsigned int v54; // [sp+30h] [bp-64h]
  int v55; // [sp+38h] [bp-5Ch] BYREF
  _DWORD dest[21]; // [sp+40h] [bp-54h] BYREF

  v11 = sub_26E718(a6, a2);
  v12 = sub_171258(a1);
  v13 = *(_DWORD *)(v12 + 24);
  v14 = v12;
  switch ( *(_BYTE *)v13 )
  {
    case 1:
      v21 = sub_170040(v12);
      v22 = ((int (__fastcall *)(int))loc_16EA14)(v21);
      v23 = a7[10];
      v24 = v22;
      v25 = v23 == 115;
      if ( v23 != 115 )
        v25 = v23 == 0;
      if ( v25 )
      {
        if ( a7[3] && sub_1012C0(v14) )
        {
          v26 = sub_15AEA8(v11 + a2, v14);
          v27 = sub_170040(v14);
          sub_267E04(a7, v27, v26, a4);
        }
        else
        {
          v28 = *(_DWORD *)(*(_DWORD *)(v14 + 24) + 20);
          v29 = sub_171258(v28);
          v30 = sub_26D230(v14, v11 + v24 * a2);
          sub_EBE04(v14, (_BYTE **)(v29 + 24), v28, v11, a2, v30, a4, (int)a5, (int)a7);
        }
      }
      else
      {
        sub_266D40(v14, 0, a2, a2 >> 31, a6, a7, 0, a4);
      }
      return sub_25680C(a4);
    case 2:
      v16 = *(_DWORD *)(v13 + 20);
      v17 = sub_171258(v16);
      v18 = sub_170040(v14);
      v49 = ((int (__fastcall *)(int))loc_16EA14)(v18);
      if ( *(_DWORD *)(v14 + 20) && *(_DWORD *)(v16 + 20) )
      {
        v36 = sub_170040(v14);
        v52 = ((int (__fastcall *)(int))loc_165BB8)(v36);
        if ( !sub_171B30(v14, &v55, dest) )
          sub_946E0("Could not determine the array high bound");
        v53 = *(_DWORD *)(v17 + 20);
        v51 = dest[0] + 1 - v55;
        v54 = v51;
        if ( a7[1] )
          sub_25A7A0(2 * ((_DWORD)a5 + 1), a4);
        v37 = *((unsigned __int8 *)a7 + 40);
        v38 = v37 != 115;
        if ( !*((_BYTE *)a7 + 40) )
          v38 = 0;
        if ( !v38 )
        {
          if ( sub_EBD30(v16, v37) )
          {
            if ( sub_26B3A4(a6, *(_DWORD *)(v14 + 20), a2, a2 >> 31, *(_DWORD *)(v14 + 20), 0) )
            {
              v40 = ((int (__fastcall *)(int, int, int))loc_26B3D8)(a6, 8 * a2, 8 * *(_DWORD *)(v14 + 20));
              if ( !v40 )
              {
                v41 = v49 * a2;
                if ( a7[11] )
                {
                  if ( !v51 )
                  {
                    v42 = v11 + v41;
                    v43 = 0;
                    goto LABEL_54;
                  }
                  v43 = a7[7];
                  v42 = v11 + v41;
                  if ( !v43 )
                    goto LABEL_58;
                  v43 = 0;
                  v44 = v11 + v41;
                  while ( sub_15C250(v44, v53, v52) )
                  {
                    if ( v51 == ++v43 )
                    {
                      v40 = 0;
                      goto LABEL_54;
                    }
                    v45 = a7[7];
                    v44 += v53;
                    v46 = v45 == v43;
                    if ( v45 <= v43 )
                    {
                      v40 = 0;
                      if ( !v46 )
                        goto LABEL_54;
LABEL_58:
                      v40 = sub_15C250(v11 + v41 + v43 * v53, v53, v52) != 0;
                      goto LABEL_54;
                    }
                  }
                  v40 = 0;
                  v47 = a7[7] == v43;
                  if ( v51 <= v43 )
                    v47 = 0;
                  if ( v47 )
                    goto LABEL_58;
LABEL_54:
                  v54 = v43;
                }
                else
                {
                  v42 = v11 + v41;
                }
                (*((void (__fastcall **)(int, int, int, unsigned int, _DWORD, int, _DWORD *))off_46D5A4[0] + 13))(
                  a4,
                  v16,
                  v42,
                  v54,
                  0,
                  v40,
                  a7);
              }
            }
          }
        }
        sub_25A418(a4, "{");
        v39 = sub_1012C0(v17);
        if ( v39 )
        {
          sub_25A418(a4, "%d vtable entries", v51 - 1);
          v39 = 1;
        }
        sub_267F74(v14, (int)a5, a2, a2 >> 31, a3, a4, (int)a5, a6, a7, v39);
        sub_25A418(a4, "}");
      }
      else
      {
        sub_EBE04(v14, (_BYTE **)(v17 + 24), v16, v11, a2, a2 + a3, a4, (int)a5, (int)a7);
      }
      return sub_25680C(a4);
    case 3:
      goto LABEL_4;
    case 4:
      if ( a5 && !a7[4] )
        sub_25A418(a4, "{...}");
      else
LABEL_4:
        sub_EBC54(v12, v11, a2, a3, a4, a5, a6, (int)a7);
      return sub_25680C(a4);
    case 8:
      v19 = sub_170040(v12);
      v48 = ((int (__fastcall *)(int))loc_16EA14)(v19);
      v50 = a7[10];
      if ( v50 || (v50 = a7[9]) != 0 )
      {
        v20 = memcpy(dest, a7, 0x4Cu);
        dest[10] = v50;
        sub_266D40(v14, v50, a2, a2 >> 31, a6, v20, 0, a4);
        return sub_25680C(a4);
      }
      sub_266D40(v14, a6, a2, a2 >> 31, a6, a7, 0, a4);
      v31 = *((unsigned __int8 *)a7 + 40);
      v32 = v31 == 0;
      if ( *((_BYTE *)a7 + 40) )
        v32 = v31 == 115;
      if ( v32 && sub_EBD30(a1, v31) )
      {
        sub_25A6BC(&word_3E1F84, a4);
        v33 = v14;
        v34 = off_46D5A4[0][12];
        v35 = sub_26D134(v33, v11 + v48 * a2);
        ((void (__fastcall *)(int, int, int))v34)(v35, a1, a4);
      }
      return sub_25680C(a4);
    case 0x10:
      sub_FC784(v11 + a2, v12, a4);
      return sub_25680C(a4);
    case 0x11:
      if ( a7[10] )
        goto LABEL_14;
      sub_102464(v11 + a2, v12, a4, "&");
      return sub_25680C(a4);
    default:
LABEL_14:
      sub_26833C(v12, a2, a3, a4, a5, a6, a7, &off_38B330);
      return sub_25680C(a4);
  }
}
