int __fastcall sub_EC7B4(int a1, int a2, void *src)
{
  int v6; // r8
  __int64 v7; // r0
  char *v8; // r10
  int v9; // r9
  int v10; // r7
  __int64 v11; // r6
  int v12; // r0
  int v14; // r3
  int v15; // r0
  int v16; // r2
  int v17; // r3
  const char *v18; // r11
  int v19; // r0
  int v20; // r6
  int v21; // r0
  char *v22; // r3
  int v23; // r4
  int v24; // r6
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r7
  int v29; // r0
  int v30; // r4
  int v31; // r7
  int v32; // r8
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r7
  int v37; // r0
  int v38; // [sp+18h] [bp-64h] BYREF
  int v39; // [sp+1Ch] [bp-60h] BYREF
  _DWORD v40[3]; // [sp+20h] [bp-5Ch] BYREF
  _DWORD dest[20]; // [sp+2Ch] [bp-50h] BYREF

  memcpy(dest, src, 0x4Cu);
  dest[13] = 1;
  v6 = sub_26BC70(a1);
  v7 = sub_171258(v6);
  v8 = *(char **)(v7 + 24);
  v9 = v7;
  v10 = *v8;
  if ( v10 == 1 || (unsigned __int8)(v10 - 18) <= 1u )
  {
    v14 = *(_DWORD *)(v6 + 24);
    if ( *(_BYTE *)v14 != 1
      || *(_DWORD *)(v14 + 8)
      || (v17 = *(_DWORD *)(*(_DWORD *)(v14 + 20) + 24), (v18 = *(const char **)(v17 + 8)) == 0)
      || strcmp(*(const char **)(v17 + 8), "char") && !sub_EBBFC(v18) )
    {
      if ( *((_DWORD *)src + 6) && **(_BYTE **)(*((_DWORD *)v8 + 5) + 24) == 3 )
      {
        if ( (unsigned __int8)(v10 - 18) <= 1u )
        {
          v30 = sub_2616BC(a1);
          v31 = **(char **)(v9 + 24);
          sub_25A418(a2, "(");
          if ( sub_26E65C(v30) )
          {
            v32 = sub_26338C(v30, &v38, v40, &v39);
            if ( v32 )
            {
              v33 = sub_26EBA8(v30);
              v30 = sub_26DC9C(v32, v33 - v40[0]);
            }
          }
          v34 = sub_26210C(v30);
          v35 = ((int (__fastcall *)(int, int))loc_2618D4)(v34, v31);
          v9 = sub_26BC70(v35);
        }
        else
        {
          sub_25A418(a2, "(");
          if ( sub_26E65C(a1) )
          {
            v36 = sub_26338C(a1, &v38, v40, &v39);
            if ( v36 )
            {
              v9 = v36;
              v37 = sub_26EBA8(a1);
              sub_26DC9C(v36, v37 - v40[0]);
            }
          }
        }
        v16 = a2;
        v15 = v9;
      }
      else
      {
        sub_25A418(a2, "(");
        v15 = sub_26BC70(a1);
        v16 = a2;
      }
      sub_255DB0(v15, "", v16, -1);
    }
  }
  if ( !sub_26E000(a1, HIDWORD(v7)) )
    sub_25A418(a2, " [uninitialized] ");
  if ( !*((_DWORD *)src + 6) || **(_BYTE **)(v9 + 24) != 3 )
    goto LABEL_7;
  v19 = sub_FC6D8(a1, &v38, v40, &v39);
  v20 = v19;
  if ( v19 )
  {
    v21 = sub_263504(a1, v19, v38, v40[0], v39);
    v22 = "";
    v23 = v21;
    if ( !v38 )
      v22 = " [incomplete object]";
    sub_25A418(a2, "(%s%s) ", *(_DWORD *)(*(_DWORD *)(v20 + 24) + 8), v22);
    v24 = sub_26BD30(v23);
    v25 = ((int (__fastcall *)(int))loc_26C09C)(v23);
    return sub_2669E8(v24, 0, 0, 0, v25, a2, 0, v23, dest, (int)off_46D5A4[0]);
  }
  else
  {
    v26 = sub_26BD30(a1);
    if ( v9 == (unsigned int)sub_171258(v26) )
    {
LABEL_7:
      v11 = sub_26BFE0(a1);
      v12 = ((int (__fastcall *)(int))loc_26C09C)(a1);
      return sub_2669E8(v6, 0, v11, SHIDWORD(v11), v12, a2, 0, a1, dest, (int)off_46D5A4[0]);
    }
    v27 = sub_26BD30(a1);
    sub_25A418(a2, "(%s ?) ", *(const char **)(*(_DWORD *)(v27 + 24) + 8));
    v28 = sub_26BD30(a1);
    v29 = ((int (__fastcall *)(int))loc_26C09C)(a1);
    return sub_2669E8(v28, (int)off_46D5A4[0], 0, 0, v29, a2, 0, a1, dest, (int)off_46D5A4[0]);
  }
}
