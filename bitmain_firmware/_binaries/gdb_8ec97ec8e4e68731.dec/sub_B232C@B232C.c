void __fastcall sub_B232C(int a1, char *a2, int a3, int a4, int a5, int a6)
{
  int v10; // r0
  int v11; // r10
  char *v12; // r6
  _BOOL4 v13; // r3
  int v14; // r2
  size_t v15; // r0
  size_t v16; // r0
  const char *v17; // r1
  int v18; // r0
  int v19; // r3
  int v20; // r7
  int v21; // r3
  int v22; // r0
  __int64 v23; // r0
  int v24; // r7
  int v25; // r6
  int v26; // r4
  int v27; // r0
  int v28; // r4
  int v29; // r0
  int v30; // r6
  __int64 v31; // r4
  int v32; // r7
  int v33; // r0
  __int64 v34; // r2
  bool v35; // zf
  __int64 v36; // r0
  char *v37; // r0
  int v38; // r4
  int v39; // r5
  int v40; // r6
  int v41; // r0
  int v42; // r0
  int v43; // r5
  const char *v44; // r2
  int v45; // r0
  int v46; // [sp+10h] [bp-1Ch]
  int v48; // [sp+20h] [bp-Ch]

  while ( 1 )
  {
    v10 = sub_A2598(a1);
    v11 = sub_A0870(v10);
    v12 = sub_B19C0(a1);
    if ( !a2 || !*a2 )
    {
      if ( !v11 )
        goto LABEL_22;
      if ( a4 > 0 )
      {
        v11 = sub_A0870(v11);
        goto LABEL_10;
      }
      goto LABEL_6;
    }
    if ( !v11 )
    {
      v16 = sub_9E5E8(a2);
      sub_25A418(a3, "%.*s: ", v16, a2);
LABEL_22:
      v17 = "<null type?>";
      v18 = a3;
      goto LABEL_23;
    }
    if ( a4 > 0 )
    {
      v11 = sub_A0870(v11);
      if ( **(_BYTE **)(v11 + 24) == 7 )
        goto LABEL_10;
    }
    else if ( **(_BYTE **)(v11 + 24) == 7 )
    {
      goto LABEL_6;
    }
    v15 = sub_9E5E8(a2);
    sub_25A418(a3, "%.*s: ", v15, a2);
LABEL_6:
    v13 = a4 <= 0;
    if ( !v12 )
      v13 = 0;
    if ( v13 && !sub_A2514(v11) )
    {
      sub_9E5E8(v12);
      v17 = "%.*s";
      v18 = a3;
      goto LABEL_23;
    }
LABEL_10:
    if ( sub_A2514(v11) )
    {
      a1 = sub_A2E80(v11);
      goto LABEL_26;
    }
    if ( !sub_A0CFC(v11) )
    {
      v14 = *(_DWORD *)(v11 + 24);
      switch ( *(_BYTE *)v14 )
      {
        case 1:
        case 0x17:
          goto LABEL_14;
        case 2:
          goto LABEL_24;
        case 3:
          if ( sub_A0C94(v11) )
            goto LABEL_24;
          v38 = sub_A1038(v11);
          if ( v38 )
          {
            v17 = "array (?) of ? (<mal-formed descriptor>)";
            v18 = a3;
            goto LABEL_23;
          }
          v42 = sub_A0E38(v11, "___XVE");
          if ( v42 )
            v11 = v42;
          v43 = sub_A2DF0(v11);
          if ( sub_A0854(v43) )
          {
            v44 = sub_B19C0(v43);
            if ( !v44 )
              v44 = (const char *)sub_A0854(v43);
            sub_25A418(a3, "new %s with record", v44);
          }
          else
          {
            if ( !v43 && sub_A2C88(v11, 0) )
            {
              sub_25A418(a3, "tagged record");
              if ( a4 >= 0 )
              {
LABEL_87:
                v45 = sub_B3048(v11, v11, 0, *(__int16 *)(*(_DWORD *)(v11 + 24) + 4) - 1, a3, a4, a5, a6) + v38;
                if ( v45 > 0 )
                {
                  v17 = "\n%*send record";
                  v18 = a3;
                }
                else
                {
                  if ( v45 )
                    LOWORD(v17) = 30808;
                  else
                    LOWORD(v17) = 30840;
                  v18 = a3;
                  HIWORD(v17) = 55;
                }
LABEL_23:
                sub_25A418(v18, v17);
                return;
              }
LABEL_100:
              v17 = " ... end record";
              v18 = a3;
              goto LABEL_23;
            }
            sub_25A418(a3, "record");
          }
          if ( a4 >= 0 )
          {
            if ( v43 && !sub_A0854(v43) )
              v38 = sub_B3048(v43, v43, 0, *(__int16 *)(*(_DWORD *)(v43 + 24) + 4) - 1, a3, a4, a5, a6);
            goto LABEL_87;
          }
          goto LABEL_100;
        case 4:
          if ( a4 < 0 )
          {
            v17 = "record (?) is ... end record";
            v18 = a3;
            goto LABEL_23;
          }
          if ( !*(_WORD *)(v14 + 4) )
          {
            v17 = "record (?) is null; end record";
            v18 = a3;
            goto LABEL_23;
          }
          sub_25A418(a3, "record (?) is\n%*scase ? is", a5 + 4, "");
          if ( *(__int16 *)(*(_DWORD *)(v11 + 24) + 4) > 0 )
          {
            v48 = a4 - 1;
            v24 = 0;
            v25 = a5 + 12;
            v26 = 0;
            do
            {
              ++v24;
              sub_25A418(a3, "\n%*swhen ? =>\n%*s", a5 + 8, "", v25, "");
              v27 = *(_DWORD *)(*(_DWORD *)(v11 + 24) + 24) + v26;
              v26 += 24;
              sub_B232C(*(_DWORD *)(v27 + 12), *(_DWORD *)(v27 + 16), a3, v48, v25, a6);
              sub_25A418(a3, ";");
            }
            while ( *(__int16 *)(*(_DWORD *)(v11 + 24) + 4) > v24 );
          }
          sub_25A418(a3, "\n%*send case;\n%*send record");
          return;
        case 5:
          if ( a4 >= 0 )
          {
            v28 = *(__int16 *)(v14 + 4);
            v46 = v28;
            sub_25A418(a3, "(");
            v29 = sub_259B58(&word_3E1F84);
            if ( v28 > 0 )
            {
              sub_258BD4(v29);
              v30 = 0;
              v31 = 0;
              v32 = 0;
              while ( 1 )
              {
                sub_259B58("    ");
                v33 = sub_A2F0C(*(const char **)(*(_DWORD *)(*(_DWORD *)(v11 + 24) + 24) + v30 + 16));
                sub_25A6BC(v33, a3);
                v34 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v11 + 24) + 24) + v30);
                v35 = HIDWORD(v34) == HIDWORD(v31);
                LODWORD(v36) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v11 + 24) + 24) + v30);
                if ( HIDWORD(v34) == HIDWORD(v31) )
                  v35 = (_DWORD)v34 == (_DWORD)v31;
                if ( !v35 )
                {
                  HIDWORD(v36) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v11 + 24) + 24) + v30 + 4);
                  v37 = sub_988AC(v36);
                  LODWORD(v36) = sub_25A418(a3, " => %s", v37);
                  v31 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v11 + 24) + 24) + v30);
                }
                ++v32;
                ++v31;
                v30 += 24;
                if ( v46 == v32 )
                  break;
                sub_258BD4(v36);
                sub_25A418(a3, ", ");
              }
            }
            v17 = ")";
            v18 = a3;
          }
          else
          {
            v17 = "(...)";
            v18 = a3;
          }
          goto LABEL_23;
        case 7:
          v19 = *(_DWORD *)(v14 + 20);
          v20 = *(__int16 *)(v14 + 4);
          if ( v19 && **(_BYTE **)(v19 + 24) == 10 )
            sub_25A418(a3, "procedure");
          else
            sub_25A418(a3, "function");
          if ( a2 && *a2 )
            sub_25A418(a3, " %s", a2);
          if ( v20 > 0 )
          {
            sub_25A418(a3, " (");
            v39 = 0;
            v40 = 0;
            while ( 1 )
            {
              sub_25A418(a3, "a%d: ", ++v39);
              v41 = *(_DWORD *)(*(_DWORD *)(v11 + 24) + 24) + v40;
              v40 += 24;
              sub_B232C(*(_DWORD *)(v41 + 12), "", a3, -1, 0, a6);
              if ( v20 == v39 )
                break;
              sub_25A6BC("; ", a3);
              sub_259B58("    ");
            }
            sub_25A418(a3, ")");
          }
          v21 = *(_DWORD *)(*(_DWORD *)(v11 + 24) + 20);
          if ( !v21 )
          {
            v17 = " return <unknown return type>";
            v18 = a3;
            goto LABEL_23;
          }
          if ( **(_BYTE **)(v21 + 24) == 10 )
            return;
          sub_25A418(a3, " return ");
          a5 = 0;
          a4 = 0;
          a1 = *(_DWORD *)(*(_DWORD *)(v11 + 24) + 20);
          goto LABEL_26;
        case 8:
          if ( sub_A3124(v11) )
            goto LABEL_69;
          v22 = sub_A0854(v11);
          if ( !sub_A33F0(v22) )
          {
            v17 = "<%d-byte integer>";
            v18 = a3;
            goto LABEL_23;
          }
          sub_25A418(a3, "range ");
          sub_B1F80(v11, a3, 1);
          return;
        case 9:
          v17 = "<%d-byte float>";
          v18 = a3;
          goto LABEL_23;
        case 0xC:
          if ( sub_A3124(v11) )
          {
LABEL_69:
            sub_B2100(v11, a3);
          }
          else
          {
            if ( sub_A341C(v11) )
            {
              v23 = sub_A3488(v11);
              sub_98C1C(v23, 10, 0, 0, 1);
              v17 = "mod %s";
              v18 = a3;
              goto LABEL_23;
            }
            sub_25A418(a3, "range ");
            sub_B1B34(v11, a3, 1);
          }
          return;
        case 0x12:
          sub_25A418(a3, "<ref> ");
          a1 = *(_DWORD *)(*(_DWORD *)(v11 + 24) + 20);
          goto LABEL_26;
        case 0x15:
          v17 = "(false, true)";
          v18 = a3;
          goto LABEL_23;
        default:
          sub_25A418(a3, (const char *)&word_364FA4);
          sub_E9398(v11, "");
          v17 = ">";
          v18 = a3;
          goto LABEL_23;
      }
    }
    if ( **(_BYTE **)(v11 + 24) != 1 )
      break;
LABEL_14:
    sub_25A418(a3, "access ");
    a1 = *(_DWORD *)(*(_DWORD *)(v11 + 24) + 20);
LABEL_26:
    a2 = "";
  }
LABEL_24:
  sub_B2CE0(v11, a3, a4, a5, a6);
}
