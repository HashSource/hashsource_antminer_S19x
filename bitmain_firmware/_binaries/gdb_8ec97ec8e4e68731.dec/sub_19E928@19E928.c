int __fastcall sub_19E928(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v8; // r4
  int result; // r0
  int v10; // r6
  int v11; // r3
  int v12; // r0
  int v13; // r1
  int v14; // r0
  int v15; // r3
  int v16; // r3
  int v17; // r0
  int v18; // r0
  int v19; // r8
  int v20; // r3
  int v21; // r2
  __int16 *v22; // r3
  int v23; // r6
  const char *v24; // r1
  int v25; // r0
  int v26; // r3
  int v27; // r2
  int v28; // r0
  int v29; // r8
  int v30; // r9
  __int64 v31; // r6
  __int64 v32; // r2
  bool v33; // zf
  __int64 v34; // r0
  char *v35; // r0
  int v36; // r3
  int v37; // r2
  int v38; // r11
  int v39; // r6
  int v40; // r7
  int v41; // r0
  int v42; // r0
  int v43; // r3
  int v44; // r1
  int v45; // r3
  int v46; // r6
  __int64 v47; // r2
  int v48; // r1
  __int64 v49; // r2
  int v50; // r1
  const char *v51; // r6
  char *v52; // r3
  int v53; // r2
  int v54; // r11
  __int16 *v55; // r3
  int v56; // r7
  int v57; // r6
  int v58; // r8
  int v59; // r3
  unsigned int v60; // r2
  int v61; // [sp+4h] [bp-28h]
  int v62; // [sp+8h] [bp-24h]
  int v63; // [sp+14h] [bp-18h] BYREF
  _BYTE v64[8]; // [sp+18h] [bp-14h] BYREF
  _BYTE v65[12]; // [sp+20h] [bp-Ch] BYREF

  v8 = sub_171258(a1);
  sub_258BD4(v8);
  result = sub_259B58("    ");
  if ( !v8 )
    return sub_25A6BC("<type unknown>", a3);
  v10 = *(_DWORD *)(v8 + 24);
  switch ( *(_BYTE *)v10 )
  {
    case 0:
      return sub_25A418(a3, "%s %s", "undef", "is unknown");
    case 1:
      if ( (*(_DWORD *)(v8 + 16) & 1) != 0 )
        LOWORD(v24) = 12972;
      else
        LOWORD(v24) = 12984;
      HIWORD(v24) = 60;
      sub_25A418(a3, v24);
      goto LABEL_31;
    case 2:
      sub_25A418(a3, "ARRAY [");
      v16 = *(_DWORD *)(v8 + 24);
      if ( *(_DWORD *)(*(_DWORD *)(v16 + 20) + 20) )
      {
        v17 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v16 + 24) + 12) + 24);
        if ( *(_DWORD *)(*(_DWORD *)(v17 + 24) + 16) )
        {
          sub_19E520(v17, a3, 0);
          sub_25A418(a3, (const char *)&word_3BB850);
          sub_19E520(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 24) + 24) + 12) + 24), a3, 1);
        }
      }
      sub_25A418(a3, "] OF ");
      goto LABEL_31;
    case 3:
      if ( sub_19E630(v8) )
      {
        v18 = *(_DWORD *)(v10 + 12);
        v19 = *(__int16 *)(v10 + 4);
        if ( v18 || (v18 = *(_DWORD *)(v10 + 8)) != 0 )
        {
          result = sub_25A6BC(v18, a3);
          if ( !a4 )
            return result;
          v20 = *(_DWORD *)(v8 + 24);
          if ( *(_DWORD *)(v20 + 12) || *(_DWORD *)(v20 + 8) )
            sub_25A6BC(" = ", a3);
        }
        if ( sub_19F44C(v8, v64, v65) )
        {
          sub_25A418(a3, "SET OF ");
          v21 = *(_DWORD *)(v8 + 24);
          if ( (*(_WORD *)(v21 + 2) & 0x380) == 0x80 )
            v22 = *(__int16 **)(v21 + 28);
          else
            v22 = &word_3B4A2C;
          v23 = *v22;
          if ( sub_19E75C(v8, &v63) )
          {
            LOWORD(v13) = -14408;
            v14 = v63;
            v61 = a6;
            v15 = a4 - 1;
LABEL_10:
            HIWORD(v13) = (unsigned int)"" >> 16;
            return sub_19E928(v14, v13, a3, v15, a5, v61);
          }
          else
          {
            sub_25A418(a3, "[");
            sub_19E520(
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 24) + 24)
                                                                        + 24 * v23
                                                                        + 12)
                                                            + 24)
                                                + 24)
                                    + 12)
                        + 24),
              a3,
              0);
            sub_25A418(a3, (const char *)&word_3BB850);
            v44 = a3;
            v43 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 24) + 24) + 24 * v19 - 12) + 24);
LABEL_57:
            sub_19E520(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v43 + 24) + 12) + 24), v44, 1);
            return sub_25A418(a3, (const char *)&word_419FC8);
          }
        }
        else
        {
          return sub_25A418(a3, "SET OF <unknown>");
        }
      }
      else
      {
        result = sub_19E8AC(v8);
        if ( !result )
        {
          v51 = *(const char **)(v10 + 12);
          if ( !v51 || !strncmp(v51, "$$", 2u) || (sub_25A6BC(v51, a3), a4 <= 0) )
          {
            result = sub_259B58("    ");
            if ( a4 < 0 )
            {
              v11 = **(char **)(v8 + 24);
              if ( v11 == 3 )
                return sub_25A418(a3, "RECORD ... END ");
              if ( v11 == 4 )
                return sub_25A418(a3, "CASE ... END ");
              return result;
            }
            if ( !a4 )
              return result;
          }
          else
          {
            sub_25A418(a3, " = ");
            result = sub_259B58("    ");
          }
          v52 = *(char **)(v8 + 24);
          v53 = *v52;
          v54 = *((__int16 *)v52 + 2);
          if ( v53 == 3 )
          {
            result = sub_25A418(a3, "RECORD\n");
            v52 = *(char **)(v8 + 24);
          }
          else if ( v53 == 4 )
          {
            result = sub_25A418(a3, "CASE <variant> OF\n");
            v52 = *(char **)(v8 + 24);
          }
          if ( (*((_WORD *)v52 + 1) & 0x380) == 0x80 )
            v55 = (__int16 *)*((_DWORD *)v52 + 7);
          else
            v55 = &word_3B4A2C;
          v56 = *v55;
          if ( v54 > v56 )
          {
            v57 = 24 * v56;
            v58 = a5 + 4;
            do
            {
              sub_258BD4(result);
              sub_25A7A0(v58, a3);
              ++v56;
              sub_25A6BC(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 24) + 24) + v57 + 16), a3);
              sub_25A6BC(&off_3A6E68, a3);
              sub_19E928(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 24) + 24) + v57 + 12), "", a3, 0, v58, a6);
              v59 = *(_DWORD *)(*(_DWORD *)(v8 + 24) + 24) + v57;
              v57 += 24;
              v60 = *(_DWORD *)(v59 + 8);
              if ( (v60 & 0xFFFFFFF0) != 0 )
                sub_25A418(a3, " : %d", v60 >> 4, v60 & 0xFFFFFFF0);
              result = sub_25A418(a3, ";\n");
            }
            while ( v54 != v56 );
          }
          return sub_25A7C0(a5, a3, "END ");
        }
        if ( a4 > 0 )
        {
          sub_25A6BC("ARRAY OF ", a3);
          v26 = 0;
          v27 = a3;
          v25 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 24) + 24) + 12) + 24);
          return sub_19E928(*(_DWORD *)(v25 + 20), "", v27, v26, a5, a6);
        }
      }
      return result;
    case 4:
      return sub_25A418(a3, "union");
    case 5:
      if ( a4 < 0 )
      {
        if ( !*(_DWORD *)(v10 + 12) )
          return sub_25A418(a3, "(...)");
      }
      else if ( a4 || !*(_DWORD *)(v10 + 12) )
      {
        v28 = sub_25A418(a3, "(");
        v62 = *(__int16 *)(*(_DWORD *)(v8 + 24) + 4);
        if ( v62 > 0 )
        {
          sub_258BD4(v28);
          v29 = 0;
          v30 = 0;
          v31 = 0;
          while ( 1 )
          {
            sub_259B58("    ");
            sub_25A6BC(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 24) + 24) + v29 + 16), a3);
            v32 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 24) + 24) + v29);
            v33 = HIDWORD(v32) == HIDWORD(v31);
            LODWORD(v34) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 24) + 24) + v29);
            if ( HIDWORD(v32) == HIDWORD(v31) )
              v33 = (_DWORD)v32 == (_DWORD)v31;
            if ( !v33 )
            {
              HIDWORD(v34) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 24) + 24) + v29 + 4);
              v35 = sub_988AC(v34);
              LODWORD(v34) = sub_25A418(a3, " = %s", v35);
              v31 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 24) + 24) + v29);
            }
            ++v30;
            ++v31;
            v29 += 24;
            if ( v62 == v30 )
              break;
            sub_258BD4(v34);
            sub_25A418(a3, ", ");
          }
        }
        return sub_25A418(a3, ")");
      }
      return result;
    case 7:
      sub_25A418(a3, "PROCEDURE ");
      v36 = *(_DWORD *)(v8 + 24);
      result = *(_DWORD *)(v36 + 8);
      if ( result )
      {
        result = sub_25A6BC(result, a3);
        v36 = *(_DWORD *)(v8 + 24);
      }
      v37 = *(_DWORD *)(v36 + 20);
      if ( !v37 || **(_BYTE **)(v37 + 24) != 10 )
      {
        v38 = *(__int16 *)(v36 + 4);
        sub_25A418(a3, " (");
        if ( v38 > 0 )
        {
          v39 = 0;
          v40 = 0;
          while ( 1 )
          {
            ++v40;
            v41 = *(_DWORD *)(*(_DWORD *)(v8 + 24) + 24) + v39;
            v39 += 24;
            sub_19E928(*(_DWORD *)(v41 + 12), "", a3, -1, 0, a6);
            if ( v38 == v40 )
              break;
            sub_25A6BC(", ", a3);
            sub_259B58("    ");
          }
        }
        sub_25A418(a3, ") : ");
        v42 = *(_DWORD *)(*(_DWORD *)(v8 + 24) + 20);
        if ( v42 )
          return sub_19E928(v42, "", a3, 0, 0, a6);
        else
          return sub_255F30(a3);
      }
      return result;
    case 0xA:
      return result;
    case 0xB:
      sub_25A418(a3, "SET [");
      sub_19E520(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 24) + 24) + 12) + 24), a3, 0);
      sub_25A418(a3, (const char *)&word_3BB850);
      v43 = *(_DWORD *)(v8 + 24);
      v44 = a3;
      goto LABEL_57;
    case 0xC:
      v45 = *(_DWORD *)(v10 + 24);
      v46 = *(_DWORD *)(v10 + 20);
      if ( *(_QWORD *)(v45 + 24) == *(_QWORD *)(v45 + 8) )
        return sub_19E928(v46, "", a3, a4, a5, a6);
      sub_25A418(a3, "[");
      v47 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 24) + 24) + 8);
      sub_255F50(v46, v48, v47, HIDWORD(v47), a3);
      sub_25A418(a3, (const char *)&word_3BB850);
      v49 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 24) + 24) + 24);
      sub_255F50(v46, v50, v49, HIDWORD(v49), a3);
      return sub_25A418(a3, (const char *)&word_419FC8);
    case 0xE:
      return sub_25A418(a3, "%s %s", "error", "is unknown");
    case 0xF:
      return sub_25A418(a3, "%s %s", "method", "is unknown");
    case 0x12:
      sub_25A418(a3, "VAR");
LABEL_31:
      v25 = *(_DWORD *)(v8 + 24);
      v26 = a4;
      v27 = a3;
      return sub_19E928(*(_DWORD *)(v25 + 20), "", v27, v26, a5, a6);
    case 0x17:
      v12 = *(_DWORD *)(v10 + 8);
      if ( v12 )
      {
        sub_25A6BC(v12, a3);
        sub_25A6BC(" = ", a3);
        v10 = *(_DWORD *)(v8 + 24);
      }
      LOWORD(v13) = (unsigned __int16)"";
      v14 = *(_DWORD *)(v10 + 20);
      v61 = a6;
      v15 = a4;
      goto LABEL_10;
    default:
      result = *(_DWORD *)(v10 + 8);
      if ( result )
        return sub_25A6BC(result, a3);
      return result;
  }
}
