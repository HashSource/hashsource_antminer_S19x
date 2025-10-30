int __fastcall sub_907B8(__int64 a1, int a2, int a3)
{
  unsigned int v3; // r8
  int v4; // r9
  const char *v5; // r10
  __int64 v7; // r4
  int *v9; // r3
  int v10; // r8
  int v11; // r3
  const char *v12; // r0
  int v13; // r0
  int v14; // r6
  int v15; // r1
  int v16; // r3
  int v17; // r2
  int result; // r0
  int v19; // r1
  int v20; // r1
  int v21; // r11
  const char *v22; // r8
  int v23; // r0
  int v24; // r9
  _DWORD *v25; // r7
  const char *v26; // r11
  int v27; // r1
  int **v28; // r3
  int *v29; // r7
  int *v30; // r8
  int v31; // t1
  int v32; // r1
  int v33; // r1
  int v34; // r7
  int v35; // r1
  int v36; // r6
  int v37; // r1
  int **v38; // r3
  int *v39; // r7
  int *v40; // r8
  int v41; // t1
  int v42; // r1
  int v43; // r9
  int v44; // r3
  int v45; // r1
  int v46; // r2
  const char *v47; // [sp+8h] [bp-1Ch] BYREF
  int v48[2]; // [sp+Ch] [bp-18h] BYREF
  size_t v49; // [sp+14h] [bp-10h]
  int v50; // [sp+18h] [bp-Ch] BYREF
  int v51; // [sp+1Ch] [bp-8h]

  v7 = a1;
  switch ( *(_DWORD *)HIDWORD(a1) )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x17:
    case 0x60:
      sub_907B8(a1, *(_DWORD *)(HIDWORD(a1) + 16), a2, 0);
      sub_907B8(v7, *(_DWORD *)(HIDWORD(v7) + 40), a2, 0);
      if ( (*(_BYTE *)(HIDWORD(v7) + 8) & 1) != 0 )
      {
        sub_1C37BC(v7, 31);
        sub_1C37BC(v7, *(_DWORD *)HIDWORD(v7));
        result = sub_1C37BC(v7, 31);
      }
      else
      {
        result = sub_1C37BC(v7, *(_DWORD *)HIDWORD(v7));
      }
      if ( (*(_BYTE *)(HIDWORD(v7) + 8) & 1) != 0 || *(_DWORD *)HIDWORD(v7) == 21 )
      {
        HIDWORD(v7) = sub_1946C8(**(_DWORD **)(v7 + 4), *(_DWORD *)(*(_DWORD *)(v7 + 4) + 4), "()");
        sub_1C37BC(v7, 38);
        sub_1C38F4(v7, HIDWORD(v7));
        sub_1C3898(v7, v19, 0, 0);
        sub_1C37BC(v7, 38);
        return sub_1C37BC(v7, 22);
      }
      return result;
    case 0x26:
      sub_1C37BC(a1, 38);
      sub_1C38F4(v7, *(_DWORD *)(HIDWORD(v7) + 24));
      sub_1C3898(v7, v20, *(_DWORD *)(HIDWORD(v7) + 16), *(_DWORD *)(HIDWORD(v7) + 20));
      return sub_1C37BC(v7, 38);
    case 0x27:
      sub_1C37BC(a1, 39);
      sub_1C38F4(v7, *(_DWORD *)(HIDWORD(v7) + 32));
      sub_1C38C0(v7, HIDWORD(v7) + 16);
      return sub_1C37BC(v7, 39);
    case 0x28:
      if ( **(_BYTE **)(HIDWORD(a1) + 16) == 36 )
        return sub_1C4F9C(a1, *(_DWORD *)(HIDWORD(a1) + 16), *(_DWORD *)(HIDWORD(a1) + 20));
      v5 = (const char *)sub_9006C(a1, (_DWORD *)HIDWORD(a1));
      v47 = v5;
      v48[0] = dword_487CD0;
      sub_8D040(&v47, v48);
      sub_21D6B0(&v50, v47, v48[0], 1, 0);
      v21 = v50;
      if ( !v50 )
        goto LABEL_62;
      sub_8D084(v50, v51);
      if ( *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v21 + 32) >> 3)) != 8 )
      {
        HIDWORD(v7) = v51;
        sub_1C37BC(v7, 40);
        sub_1C3840(v7, HIDWORD(v7));
        sub_1C37E8(v7, v21);
        return sub_1C37BC(v7, 40);
      }
      v43 = *(_DWORD *)(v21 + 24);
      if ( !v43 )
      {
LABEL_62:
        v43 = sub_8D0D4(v5, dword_487CD0);
        if ( !v43 )
          sub_946E0("No symbol '%s' in current context", v5);
      }
      if ( a3 )
        goto LABEL_66;
      v44 = *(_DWORD *)(v43 + 24);
      if ( *(_BYTE *)v44 != 3 || *(_WORD *)(v44 + 4) )
      {
        if ( HIDWORD(v7) == a2 )
        {
LABEL_66:
          sub_1C37BC(v7, 88);
          sub_1C38F4(v7, v43);
          return sub_1C37BC(v7, 88);
        }
LABEL_76:
        sub_946E0("Found type '%s', which can't be evaluated in this context", v5);
      }
      sub_1C37BC(v7, 113);
      sub_1C38F4(v7, v43);
      v17 = 0;
      v16 = 0;
LABEL_15:
      sub_1C3898(v7, v15, v17, v16);
      return sub_1C37BC(v7, 113);
    case 0x2E:
      HIDWORD(a1) = *(_DWORD *)(HIDWORD(a1) + 16);
      if ( *(_DWORD *)HIDWORD(a1) != 40 )
        goto LABEL_54;
      v22 = (const char *)sub_9006C(a1, (_DWORD *)HIDWORD(a1));
      v23 = sub_8D0D4(v22, dword_487CD0);
      v24 = v23;
      if ( !v23 || **(_BYTE **)(v23 + 24) == 24 )
      {
        HIDWORD(a1) = *(_DWORD *)(HIDWORD(v7) + 16);
LABEL_54:
        sub_907B8(v7, HIDWORD(a1), a2, 0);
        v38 = *(int ***)(HIDWORD(v7) + 40);
        v39 = *v38;
        v40 = v38[1];
        if ( *v38 != v40 )
        {
          do
          {
            v41 = *v39++;
            sub_907B8(v7, v41, a2, 0);
          }
          while ( v40 != v39 );
        }
        sub_1C37BC(v7, 46);
        sub_1C3898(
          v7,
          **(_DWORD **)(HIDWORD(v7) + 40),
          (*(_DWORD *)(*(_DWORD *)(HIDWORD(v7) + 40) + 4) - **(_DWORD **)(HIDWORD(v7) + 40)) >> 2,
          0);
        return sub_1C3898(v7, v42, 46, 0);
      }
      else
      {
        v25 = *(_DWORD **)(HIDWORD(v7) + 40);
        if ( !((int (*)(void))sub_1FA398)() )
          sub_946E0("Type %s is not a tuple struct", v22);
        if ( v25[1] != *v25 )
        {
          HIDWORD(v7) = 0;
          do
          {
            v26 = (const char *)sub_98850();
            sub_93170(v26, 50, "__%d", HIDWORD(v7));
            sub_1C37BC(v7, 89);
            v48[1] = (int)v26;
            v49 = strlen(v26);
            sub_1C4F0C(v7, v26, v49);
            sub_1C37BC(v7, 89);
            v27 = *(_DWORD *)(*v25 + 4 * HIDWORD(v7)++);
            sub_907B8(v7, v27, a2, 0);
          }
          while ( HIDWORD(v7) < (v25[1] - *v25) >> 2 );
        }
        sub_1C37BC(v7, 113);
        sub_1C38F4(v7, v24);
        sub_1C3898(v7, *v25, 2 * ((v25[1] - *v25) >> 2), 0);
        return sub_1C37BC(v7, 113);
      }
    case 0x32:
      sub_1C37BC(a1, 50);
      sub_1C4F0C(v7, *(_DWORD *)(HIDWORD(v7) + 16), *(_DWORD *)(HIDWORD(v7) + 20));
      return sub_1C37BC(v7, 50);
    case 0x33:
      if ( !*(_DWORD *)(HIDWORD(a1) + 16) )
      {
        v28 = *(int ***)(HIDWORD(a1) + 40);
        v29 = *v28;
        v30 = v28[1];
        if ( *v28 != v30 )
        {
          do
          {
            v31 = *v29++;
            sub_907B8(v7, v31, a2, 0);
          }
          while ( v30 != v29 );
        }
        sub_1C37BC(v7, 51);
        sub_1C3898(v7, v32, 0, 0);
        sub_1C3898(
          v7,
          **(_DWORD **)(HIDWORD(v7) + 40),
          ((*(_DWORD *)(*(_DWORD *)(HIDWORD(v7) + 40) + 4) - **(_DWORD **)(HIDWORD(v7) + 40)) >> 2) - 1,
          0);
        return sub_1C3898(v7, v33, 51, 0);
      }
      sub_94700(
        "rust-exp.y",
        2328,
        "%s: Assertion `%s' failed.",
        "void convert_ast_to_expression(parser_state*, const rust_op*, const rust_op*, bool)",
        "operation->left.op == NULL");
      goto LABEL_76;
    case 0x34:
      HIDWORD(a1) = *(_DWORD *)(HIDWORD(a1) + 40);
      v34 = sub_9033C(a1);
      sub_907B8(v7, *(_DWORD *)(HIDWORD(v7) + 16), a2, 0);
      sub_1C37BC(v7, 52);
      sub_1C38F4(v7, v34);
      return sub_1C37BC(v7, 52);
    case 0x3A:
    case 0x3C:
    case 0x3D:
    case 0x3E:
    case 0x44:
      sub_907B8(a1, *(_DWORD *)(HIDWORD(a1) + 16), a2, 0);
      return sub_1C37BC(v7, *(_DWORD *)HIDWORD(v7));
    case 0x43:
      sub_907B8(a1, *(_DWORD *)(HIDWORD(a1) + 16), a2, 1);
      return sub_1C37BC(v7, 67);
    case 0x51:
      sub_907B8(a1, *(_DWORD *)(HIDWORD(a1) + 16), a2, 0);
      if ( (*(_BYTE *)(HIDWORD(v7) + 8) & 2) != 0 )
        ((void (__fastcall *)(_DWORD))loc_1C3BBC)(v7);
      sub_1C37BC(v7, 81);
      sub_1C4F0C(v7, *(_DWORD *)(HIDWORD(v7) + 40), *(_DWORD *)(HIDWORD(v7) + 44));
      return sub_1C37BC(v7, 81);
    case 0x53:
      sub_907B8(a1, *(_DWORD *)(HIDWORD(a1) + 16), a2, 0);
      sub_1C37BC(v7, 83);
      sub_1C3898(v7, v35, *(_DWORD *)(HIDWORD(v7) + 40), *(_DWORD *)(HIDWORD(v7) + 44));
      return sub_1C37BC(v7, 83);
    case 0x5B:
      if ( *(_DWORD *)(HIDWORD(a1) + 16) )
      {
        sub_907B8(a1, *(_DWORD *)(HIDWORD(a1) + 16), a2, 0);
        v45 = *(_DWORD *)(HIDWORD(v7) + 40);
        if ( v45 )
        {
          v46 = a2;
          v36 = 3;
          sub_907B8(v7, v45, v46, 0);
        }
        else
        {
          v36 = 2;
        }
      }
      else
      {
        HIDWORD(a1) = *(_DWORD *)(HIDWORD(a1) + 40);
        if ( HIDWORD(a1) )
        {
          sub_907B8(a1, HIDWORD(a1), a2, 0);
          v36 = 1;
        }
        else
        {
          v36 = 0;
        }
      }
      sub_1C37BC(v7, 91);
      sub_1C3898(v7, v37, v36, 0);
      return sub_1C37BC(v7, 91);
    case 0x71:
      v9 = *(int **)(HIDWORD(a1) + 40);
      v10 = *v9;
      v11 = v9[1];
      if ( v11 == v10 )
      {
        v4 = 0;
      }
      else
      {
        a3 = v10 + 12;
        v4 = 0;
        v3 = ((v11 - (v10 + 12)) & 0xFFFFFFFC) + v10 + 24;
        do
        {
          if ( *(_DWORD *)(a3 - 12) )
          {
            sub_1C37BC(v7, 89);
            sub_1C4F0C(v7, *(_DWORD *)(a3 - 12), *(_DWORD *)(a3 - 8));
            v4 += 2;
            sub_1C37BC(v7, 89);
          }
          else
          {
            ++v4;
          }
          sub_907B8(v7, *(_DWORD *)(a3 - 4), a2, 0);
          if ( !*(_DWORD *)(a3 - 12) )
LABEL_60:
            sub_1C37BC(v7, 114);
          a3 += 12;
        }
        while ( v3 != a3 );
      }
      v12 = (const char *)sub_9006C(v7, *(_DWORD **)(HIDWORD(v7) + 16));
      v13 = sub_8D0D4(v12, dword_487CD0);
      v14 = v13;
      if ( !v13 )
        sub_946E0("Could not find type '%s'", *(const char **)(HIDWORD(v7) + 16));
      if ( **(_BYTE **)(v13 + 24) != 3 || sub_1FA364() || sub_1FA398(v14) )
        sub_946E0("Struct expression applied to non-struct type");
      sub_1C37BC(v7, 113);
      sub_1C38F4(v7, v14);
      v16 = v4 >> 31;
      v17 = v4;
      goto LABEL_15;
    default:
      sub_94700(
        "rust-exp.y",
        2476,
        "%s: %s",
        "void convert_ast_to_expression(parser_state*, const rust_op*, const rust_op*, bool)",
        "unhandled opcode in convert_ast_to_expression");
      goto LABEL_60;
  }
}
