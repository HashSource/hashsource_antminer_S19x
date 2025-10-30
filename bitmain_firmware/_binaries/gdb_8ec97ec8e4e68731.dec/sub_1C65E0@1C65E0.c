int __fastcall sub_1C65E0(char *a1)
{
  int v1; // r8
  int v3; // r0
  const char ***v4; // r4
  int v5; // r0
  int v6; // r5
  char *v7; // r1
  const char **v8; // r6
  int v9; // r5
  int v10; // r7
  int v11; // r3
  char *v12; // r0
  int v13; // r2
  int v14; // r6
  void (__fastcall *v15)(const char ***, int, _DWORD); // r5
  _DWORD *v16; // r0
  int v18; // r0
  _DWORD *v19; // r0
  const char *v20; // r0
  int v21; // r6
  int v22; // r9
  int v23; // r0
  int v24; // r3
  int v25; // r0
  _DWORD *v26; // r0
  int v27; // r5
  _DWORD *v28; // r0
  int v29; // r3
  const char **v30; // r4
  int v31; // r0
  const char **v32; // r1
  int v33; // r6
  _DWORD *v34; // r0
  int v35; // r4
  int v36; // r4
  _DWORD *v37; // r0
  int v38; // r1
  const char *v39; // r0
  __int64 v40; // r0
  int v41; // r2
  int v42; // r1
  int v43; // r12
  int v44; // r0
  const char *v45; // r0
  int v46; // r5
  int v47; // r5
  _DWORD *v48; // r0
  const char *v49; // r0
  const char *v50; // r4
  const char *v51; // r0
  int v52; // [sp+8h] [bp-24h] BYREF
  int v53; // [sp+Ch] [bp-20h] BYREF
  int v54; // [sp+10h] [bp-1Ch]
  int v55; // [sp+14h] [bp-18h] BYREF
  int v56; // [sp+18h] [bp-14h]
  const char ***v57; // [sp+1Ch] [bp-10h] BYREF

  v52 = 0;
  if ( !a1 )
    sub_946E0("Argument required.");
  v3 = sub_20F388(&v52);
  sub_21D6B0(&v55, a1, v3, 1, &v57);
  v4 = (const char ***)v55;
  if ( v55 )
  {
    v5 = sub_259F10("Symbol \"");
    v6 = *(_DWORD *)sub_242F8C(v5);
    if ( dword_46D448 )
      v7 = (char *)sub_21B3C4(v4);
    else
      v7 = (char *)*v4;
    sub_25A850(v6, v7, off_46D5A4[0][2], 2);
    sub_259F10("\" is ");
    v8 = v4[2];
    if ( (*((_BYTE *)v4 + 33) & 1) != 0 && *((__int16 *)v4 + 11) >= 0 )
      v9 = *(_DWORD *)(sub_22099C(v4) + 168) + 12 * *((__int16 *)v4 + 11);
    else
      v9 = 0;
    v10 = sub_2209C0(v4);
    v11 = *((unsigned __int8 *)v4 + 32) >> 3;
    v12 = (char *)off_46DBB8 + 16 * v11;
    v13 = *((_DWORD *)v12 + 1);
    if ( v13 )
    {
      v14 = v52;
      v15 = *(void (__fastcall **)(const char ***, int, _DWORD))(v13 + 12);
      v16 = (_DWORD *)sub_242F8C(v12);
      v15(v4, v14, *v16);
      return sub_259F10(".\n");
    }
    switch ( *((_DWORD *)off_46DBB8 + 4 * v11) )
    {
      case 1:
      case 0xB:
        sub_259F10("constant");
        return sub_259F10(".\n");
      case 2:
        sub_259F10("static storage at address ");
        v30 = v4[2];
        v31 = v10;
        v32 = v30;
        goto LABEL_27;
      case 3:
        v38 = (**((int (__fastcall ***)(const char ***, int))v12 + 3))(v4, v10);
        if ( (*((_BYTE *)v4 + 33) & 2) != 0 )
        {
          v39 = (const char *)((int (__fastcall *)(int, int))loc_1677C0)(v10, v38);
          sub_259F10("an argument in register %s", v39);
        }
        else
        {
          v49 = (const char *)((int (__fastcall *)(int, int))loc_1677C0)(v10, v38);
          sub_259F10("a variable in register %s", v49);
        }
        return sub_259F10(".\n");
      case 4:
        sub_259F10("an argument at offset %ld", v8);
        return sub_259F10(".\n");
      case 5:
        sub_259F10("a reference argument at offset %ld", v8);
        return sub_259F10(".\n");
      case 6:
        v44 = (**((int (__fastcall ***)(const char ***, int))v12 + 3))(v4, v10);
        v45 = (const char *)((int (__fastcall *)(int, int))loc_1677C0)(v10, v44);
        sub_259F10("address of an argument in register %s", v45);
        return sub_259F10(".\n");
      case 7:
        sub_259F10("a local variable at frame offset %ld", v8);
        return sub_259F10(".\n");
      case 8:
        sub_259F10("a typedef");
        return sub_259F10(".\n");
      case 9:
        sub_259F10("a label at address ");
        v30 = v4[2];
        v31 = v10;
        v32 = v30;
        goto LABEL_27;
      case 0xA:
        sub_259F10("a function at address ");
        v31 = v10;
        v30 = (const char **)*v4[2];
        v32 = v30;
        goto LABEL_27;
      case 0xC:
        sub_1B2488(&v55, (char *)*v4);
        if ( !v55 )
          goto LABEL_50;
        v41 = *(__int16 *)(v55 + 22);
        v42 = *(_DWORD *)(v55 + 8);
        if ( v41 >= 0 )
        {
          v43 = *(_DWORD *)(v56 + 168);
          v9 = v43 + 12 * v41;
          if ( v9 && (*(_DWORD *)(*(_DWORD *)(v43 + 12 * v41) + 20) & 0x400) != 0 )
          {
            v50 = (const char *)sub_25AC8C(v10, v42);
            v51 = (const char *)sub_1B87A8(*(_DWORD *)(v9 + 4));
            sub_259F10("a thread-local variable at offset %s in the thread-local storage for `%s'", v50, v51);
            return sub_259F10(".\n");
          }
          goto LABEL_39;
        }
        if ( v41 != -1 )
        {
          v9 = 0;
LABEL_39:
          v30 = (const char **)(v42 + *(_DWORD *)(*(_DWORD *)(v56 + 144) + 4 * v41));
          sub_259F10("static storage at address ");
          v32 = v30;
          v31 = v10;
LABEL_27:
          v33 = sub_25AC8C(v31, v32);
          v34 = (_DWORD *)sub_242F8C(v33);
          sub_25A6BC(v33, *v34);
          if ( sub_2142A0(v9) )
          {
            v35 = sub_214714(v30, v9);
            sub_259F10(",\n -- loaded at ");
            v36 = sub_25AC8C(v10, v35);
            v37 = (_DWORD *)sub_242F8C(v36);
            sub_25A6BC(v36, *v37);
            sub_259F10(" in overlay section %s", **(const char ***)v9);
          }
          return sub_259F10(".\n");
        }
        v40 = sub_94700((int)"./printcmd.c", 1585, "Section index is uninitialized");
LABEL_50:
        sub_259F10("unresolved", HIDWORD(v40));
        break;
      case 0xD:
        sub_259F10("optimized out");
        return sub_259F10(".\n");
      case 0xE:
        sub_94700(
          (int)"./printcmd.c",
          1493,
          "%s: %s",
          "void info_address_command(const char*, int)",
          "LOC_COMPUTED variable missing a method");
        goto LABEL_44;
      default:
        sub_259F10("of unknown (botched) type");
        return sub_259F10(".\n");
    }
    return sub_259F10(".\n");
  }
  v4 = v57;
  if ( !v57 )
  {
    sub_1B1BE8(&v53, a1);
    v21 = v53;
    v22 = v54;
    if ( v53 )
    {
      v23 = sub_1B7250(v54);
      v24 = *(__int16 *)(v21 + 22);
      v1 = v23;
      if ( v24 != -1 )
      {
        v10 = *(_DWORD *)(v21 + 8) + *(_DWORD *)(*(_DWORD *)(v22 + 144) + 4 * v24);
        v25 = sub_259F10("Symbol \"");
        v26 = (_DWORD *)sub_242F8C(v25);
        sub_25A850(*v26, a1, off_46D5A4[0][2], 2);
        sub_259F10("\" is at ");
        v27 = sub_25AC8C(v1, v10);
        v28 = (_DWORD *)sub_242F8C(v27);
        sub_25A6BC(v27, *v28);
        sub_259F10(" in a file compiled without debugging");
        v29 = *(__int16 *)(v21 + 22);
        if ( v29 >= 0 )
          v4 = (const char ***)(*(_DWORD *)(v22 + 168) + 12 * v29);
        if ( sub_2142A0(v4) )
        {
LABEL_44:
          v46 = sub_214714(v10, v4);
          sub_259F10(",\n -- loaded at ");
          v47 = sub_25AC8C(v1, v46);
          v48 = (_DWORD *)sub_242F8C(v47);
          sub_25A6BC(v47, *v48);
          sub_259F10(" in overlay section %s", **v4);
        }
        return sub_259F10(".\n");
      }
      sub_94700((int)"./printcmd.c", 1428, "Section index is uninitialized");
    }
    sub_946E0("No symbol \"%s\" in current context.", a1);
  }
  v18 = sub_259F10("Symbol \"");
  v19 = (_DWORD *)sub_242F8C(v18);
  sub_25A850(*v19, a1, off_46D5A4[0][2], 2);
  sub_259F10("\" is a field of the local class variable ");
  if ( off_46D5A4[0][2] == (char *)3 )
    LOWORD(v20) = -18556;
  else
    LOWORD(v20) = -18548;
  HIWORD(v20) = 60;
  return sub_259F10(v20);
}
