int __fastcall sub_217F74(_DWORD *a1, int a2)
{
  int v4; // r5
  const char *v5; // r0
  const char *v6; // r2
  const char *v7; // r0
  const char *v8; // r0
  int *v9; // r5
  int v10; // r9
  int v11; // r10
  int v12; // t1
  int v13; // r0
  const char *v14; // r0
  int *v16; // r3
  _DWORD *v17; // r5
  int v18; // r3
  int v19; // r11
  int v20; // r2
  int v21; // r0
  int v22; // r0
  int v23; // r0
  const char **v24; // r3
  const char *v25; // r0
  int v26; // r5
  void *v27; // r8
  const char ***v28; // r6
  unsigned int v29; // r3
  int v30; // r9
  int v31; // r1
  int v32; // r2
  int v33; // r0
  char *v35; // r0
  char *v36; // r0
  char *v37; // r0
  char *v38; // r0
  __int64 v39; // r0
  char *v40; // r0
  char *v41; // r6
  char *v42; // r0
  int v43; // r7
  unsigned int v44; // r6
  int v45; // r0
  const char *v46; // r2
  int v47; // r0
  int v48; // r0
  char *v49; // r3
  const char *v50; // r2
  char *v51; // r0
  int v52; // r1
  const char *v53; // r2
  int v54; // [sp+10h] [bp-34h]
  char *v55; // [sp+14h] [bp-30h]
  int v56; // [sp+18h] [bp-2Ch]
  _DWORD *v57; // [sp+1Ch] [bp-28h]
  int v58; // [sp+20h] [bp-24h]
  char v59[16]; // [sp+34h] [bp-10h] BYREF

  v4 = *(_DWORD *)(a1[1] + 4);
  v54 = sub_1B7250(v4);
  v5 = (const char *)((int (__fastcall *)(_DWORD *))loc_2043D4)(a1);
  sub_25A418(a2, "\nSymtab for file %s\n", v5);
  v6 = *(const char **)(a1[1] + 28);
  if ( v6 )
    sub_25A418(a2, "Compilation directory is %s\n", v6);
  v7 = (const char *)sub_1B87A8(v4);
  sub_25A418(a2, "Read from object file %s (", v7);
  sub_25A44C(v4, a2);
  sub_25A418(a2, ")\n");
  v8 = (const char *)sub_19444C(a1[6]);
  sub_25A418(a2, "Language: %s\n", v8);
  v9 = (int *)a1[2];
  if ( v9 )
  {
    sub_25A418(a2, "\nLine table:\n\n");
    v10 = *v9;
    if ( *v9 > 0 )
    {
      v11 = 0;
      do
      {
        ++v11;
        sub_25A418(a2, " line %d at ", v9[1]);
        v12 = v9[2];
        v9 += 2;
        v13 = sub_25AC8C(v54, v12);
        sub_25A6BC(v13, a2);
        sub_25A418(a2, (const char *)&word_356638);
      }
      while ( v10 != v11 );
    }
  }
  if ( *(_DWORD **)(a1[1] + 12) != a1 )
  {
    v14 = (const char *)((int (*)(void))loc_2043D4)();
    return sub_25A418(a2, "\nBlockvector same as owning compunit: %s\n\n", v14);
  }
  sub_25A418(a2, "\nBlockvector:\n\n");
  v16 = *(int **)(a1[1] + 32);
  v58 = *v16;
  if ( *v16 > 0 )
  {
    v57 = v16 + 1;
    v56 = 0;
    while ( 1 )
    {
      v17 = (_DWORD *)v57[1];
      ++v57;
      v18 = v17[3];
      if ( v18 )
      {
        v20 = 0;
        do
        {
          v18 = *(_DWORD *)(v18 + 12);
          ++v20;
        }
        while ( v18 );
        v19 = 2 * v20;
      }
      else
      {
        v19 = 0;
      }
      sub_25A788(v19, a2);
      sub_25A418(a2, "block #%03d, object at ", v56);
      sub_25A44C(v17, a2);
      if ( v17[3] )
      {
        sub_25A418(a2, " under ");
        sub_25A44C(v17[3], a2);
      }
      v21 = sub_10B548(v17[4]);
      sub_25A418(a2, ", %d syms/buckets in ", v21);
      v22 = sub_25AC8C(v54, *v17);
      sub_25A6BC(v22, a2);
      sub_25A418(a2, (const char *)&word_3BB850);
      v23 = sub_25AC8C(v54, v17[1]);
      sub_25A6BC(v23, a2);
      v24 = (const char **)v17[2];
      if ( v24 )
      {
        sub_25A418(a2, ", function %s", *v24);
        if ( sub_21B790(v17[2]) )
        {
          v25 = (const char *)sub_21B790(v17[2]);
          sub_25A418(a2, ", %s", v25);
        }
      }
      sub_25A418(a2, (const char *)&word_356638);
      v26 = sub_10B510(v17[4]);
      if ( v26 )
        break;
LABEL_41:
      if ( v58 == ++v56 )
        return sub_25A418(a2, (const char *)&word_356638);
    }
    while ( 1 )
    {
      v27 = sub_92E28();
      v28 = (const char ***)(*(_BYTE *)(v26 + 33) & 1);
      if ( (*(_BYTE *)(v26 + 33) & 1) != 0 )
      {
        if ( *(__int16 *)(v26 + 22) >= 0 )
          v28 = (const char ***)(*(_DWORD *)(sub_22099C(v26) + 168) + 12 * *(__int16 *)(v26 + 22));
        else
          v28 = 0;
      }
      sub_25A788(v19 + 1, a2);
      v29 = *(unsigned __int8 *)(v26 + 32);
      if ( (v29 & 7) == 4 )
      {
        if ( dword_46D448 )
          v46 = (const char *)sub_21B3C4(v26);
        else
          v46 = *(const char **)v26;
        sub_25A418(a2, "label %s at ", v46);
        v47 = sub_25AC8C(v54, *(_DWORD *)(v26 + 8));
        sub_25A6BC(v47, a2);
        if ( v28 )
        {
          sub_25A418(a2, " section %s\n", **v28);
          goto LABEL_40;
        }
      }
      else if ( (v29 & 7) == 2 )
      {
        v48 = *(_DWORD *)(v26 + 24);
        v49 = *(char **)(v48 + 24);
        if ( *((_DWORD *)v49 + 3) )
        {
          (*((void (__fastcall **)(int, char *))off_46D5A4[0] + 15))(v48, "");
        }
        else
        {
          v52 = *v49;
          if ( v52 == 5 )
          {
            v53 = "enum";
          }
          else
          {
            v53 = "union";
            if ( v52 == 3 )
              v53 = "struct";
          }
          sub_25A418(a2, "%s %s = ", v53, *(const char **)v26);
          (*((void (__fastcall **)(_DWORD, char *, int, int, int, const char *))off_46D5A4[0] + 15))(
            *(_DWORD *)(v26 + 24),
            "",
            a2,
            1,
            v19 + 1,
            "\a");
        }
        sub_25A418(a2, ";\n");
      }
      else
      {
        if ( *((_DWORD *)off_46DBB8 + 4 * (v29 >> 3)) == 8 )
          sub_25A418(a2, "typedef ");
        v30 = *(_DWORD *)(v26 + 24);
        if ( v30 )
        {
          v55 = off_46D5A4[0][15];
          if ( dword_46D448 )
            v31 = sub_21B3C4(v26);
          else
            v31 = *(_DWORD *)v26;
          ((void (__fastcall *)(int, int, int, bool, int, const char *))v55)(
            v30,
            v31,
            a2,
            **(char **)(*(_DWORD *)(v26 + 24) + 24) != 5,
            v19 + 1,
            "\a");
          sub_25A418(a2, "; ");
        }
        else
        {
          if ( dword_46D448 )
            v50 = (const char *)sub_21B3C4(v26);
          else
            v50 = *(const char **)v26;
          sub_25A418(a2, "%s ", v50);
        }
        v32 = *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v26 + 32) >> 3));
        switch ( v32 )
        {
          case 1:
            v41 = sub_988AC(*(_QWORD *)(v26 + 8));
            v42 = sub_98B08(*(_DWORD *)(v26 + 8), *(_DWORD *)(v26 + 12));
            sub_25A418(a2, "const %s (%s)", v41, v42);
            break;
          case 2:
            sub_25A418(a2, "static at ");
            goto LABEL_36;
          case 3:
            v39 = *(_QWORD *)(v26 + 8);
            if ( (*(_BYTE *)(v26 + 33) & 2) != 0 )
            {
              v40 = sub_988AC(v39);
              sub_25A418(a2, "parameter register %s", v40);
            }
            else
            {
              v51 = sub_988AC(v39);
              sub_25A418(a2, "register %s", v51);
            }
            break;
          case 4:
            v38 = sub_98B08(*(_DWORD *)(v26 + 8), *(_DWORD *)(v26 + 12));
            sub_25A418(a2, "arg at offset %s", v38);
            break;
          case 5:
            v37 = sub_98B08(*(_DWORD *)(v26 + 8), *(_DWORD *)(v26 + 12));
            sub_25A418(a2, "reference arg at %s", v37);
            break;
          case 6:
            v36 = sub_988AC(*(_QWORD *)(v26 + 8));
            sub_25A418(a2, "address parameter register %s", v36);
            break;
          case 7:
            v35 = sub_98B08(*(_DWORD *)(v26 + 8), *(_DWORD *)(v26 + 12));
            sub_25A418(a2, "local at offset %s", v35);
            break;
          case 8:
            break;
          case 9:
            sub_25A418(a2, "label at ");
LABEL_36:
            v33 = sub_25AC8C(v54, *(_DWORD *)(v26 + 8));
            goto LABEL_37;
          case 10:
            sub_25A418(a2, "block object ");
            sub_25A44C(*(_DWORD *)(v26 + 8), a2);
            sub_25A418(a2, ", ");
            v45 = sub_25AC8C(v54, **(_DWORD **)(v26 + 8));
            sub_25A6BC(v45, a2);
            sub_25A418(a2, (const char *)&word_3BB850);
            v33 = sub_25AC8C(v54, *(_DWORD *)(*(_DWORD *)(v26 + 8) + 4));
LABEL_37:
            sub_25A6BC(v33, a2);
            if ( v28 )
              sub_25A418(a2, " section %s", **v28);
            break;
          case 11:
            v43 = sub_171258(*(_DWORD **)(v26 + 24));
            sub_25A418(a2, "const %u hex bytes:", *(_DWORD *)(v43 + 20));
            if ( *(_DWORD *)(v43 + 20) )
            {
              v44 = 0;
              do
                sub_25A418(a2, " %02x", *(unsigned __int8 *)(*(_DWORD *)(v26 + 8) + v44++));
              while ( *(_DWORD *)(v43 + 20) > v44 );
            }
            break;
          case 12:
            sub_25A418(a2, "unresolved");
            break;
          case 13:
            sub_25A418(a2, "optimized out");
            break;
          case 14:
            sub_25A418(a2, "computed at runtime");
            break;
          default:
            sub_25A418(a2, "botched symbol class %x", v32);
            break;
        }
      }
      sub_25A418(a2, (const char *)&word_356638);
LABEL_40:
      sub_92E40((int)v27);
      v26 = sub_10B51C((int)v59);
      if ( !v26 )
        goto LABEL_41;
    }
  }
  return sub_25A418(a2, (const char *)&word_356638);
}
