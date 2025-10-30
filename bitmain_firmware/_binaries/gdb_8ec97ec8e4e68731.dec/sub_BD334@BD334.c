int __fastcall sub_BD334(int a1, int a2, int a3)
{
  int v6; // r0
  unsigned int v7; // r3
  _DWORD *v8; // r1
  unsigned int v9; // r3
  int result; // r0
  int v11; // r2
  int v12; // r1
  int v13; // r0
  int v14; // r0
  int (__fastcall **v15)(int, int); // r3
  int v16; // r1
  const char *v17; // r1
  const char *v18; // r1
  const char *v19; // r1
  _DWORD v20[3]; // [sp+8h] [bp-Ch] BYREF

  v6 = sub_171258(*(_DWORD *)(a3 + 24));
  *(_BYTE *)(a2 + 8) = 0;
  v7 = *(unsigned __int8 *)(a3 + 32);
  v8 = off_46DBB8;
  *(_DWORD *)(a2 + 4) = v6;
  v9 = v7 >> 3;
  result = (int)&v8[4 * v9];
  v11 = *(_DWORD *)(result + 4);
  if ( v11 )
    return (*(int (__fastcall **)(int, int, int))(v11 + 20))(a3, a1, a2);
  switch ( v8[4 * v9] )
  {
    case 1:
      result = sub_C0B5C(a1, v8, *(_DWORD *)(a3 + 8), *(_DWORD *)(a3 + 12));
      *(_DWORD *)a2 = 0;
      return result;
    case 2:
      result = sub_C0B5C(a1, v8, *(_DWORD *)(a3 + 8), 0);
      *(_DWORD *)a2 = 1;
      return result;
    case 3:
      v15 = *(int (__fastcall ***)(int, int))(result + 12);
      v16 = *(_DWORD *)(a1 + 12);
      *(_DWORD *)a2 = 2;
      result = (*v15)(a3, v16);
      *(_DWORD *)(a2 + 12) = result;
      return result;
    case 4:
    case 7:
      sub_BD2F4(a1);
      result = sub_BD2A8(a1, *(_DWORD *)(a3 + 8));
      *(_DWORD *)a2 = 1;
      return result;
    case 5:
      sub_BD2F4(a1);
      sub_BD2A8(a1, *(_DWORD *)(a3 + 8));
      v14 = sub_1780B4(*(_DWORD *)(a1 + 12));
      result = sub_BCCD8(a1, *(_DWORD *)(v14 + 152));
      *(_DWORD *)a2 = 1;
      return result;
    case 6:
      v13 = (**(int (__fastcall ***)(int, _DWORD))(result + 12))(a3, *(_DWORD *)(a1 + 12));
      result = sub_C0C84(a1, v13);
      *(_DWORD *)a2 = 1;
      return result;
    case 8:
      goto LABEL_23;
    case 9:
      result = sub_C0B5C(a1, v8, *(_DWORD *)(a3 + 8), 0);
      *(_DWORD *)a2 = 0;
      return result;
    case 0xA:
      result = sub_C0B5C(a1, v8, **(_DWORD **)(a3 + 8), 0);
      *(_DWORD *)a2 = 0;
      return result;
    case 0xB:
      goto LABEL_22;
    case 0xC:
      sub_1B141C((int)v20, *(char **)a3);
      if ( !v20[0] )
        goto LABEL_28;
      v12 = *(__int16 *)(v20[0] + 22);
      if ( v12 == -1 )
      {
        sub_94700((int)"ax-gdb.c", 714, "Section index is uninitialized");
LABEL_28:
        if ( dword_46D448 )
          v19 = (const char *)sub_21B3C4(a3);
        else
          v19 = *(const char **)a3;
        sub_946E0("Couldn't resolve symbol `%s'.", v19);
      }
      result = sub_C0B5C(a1, v12, *(_DWORD *)(v20[0] + 8) + *(_DWORD *)(*(_DWORD *)(v20[1] + 144) + 4 * v12), 0);
      *(_DWORD *)a2 = 1;
      break;
    case 0xD:
      *(_BYTE *)(a2 + 8) = 1;
      return result;
    case 0xE:
      sub_94700(
        (int)"ax-gdb.c",
        720,
        "%s: %s",
        "void gen_var_ref(agent_expr*, axs_value*, symbol*)",
        "LOC_COMPUTED variable missing a method");
LABEL_22:
      sub_94700((int)"ax-gdb.c", 644, "gen_var_ref: LOC_CONST_BYTES symbols are not supported");
LABEL_23:
      if ( dword_46D448 )
        v18 = (const char *)sub_21B3C4(a3);
      else
        v18 = *(const char **)a3;
      sub_946E0("Cannot compute value of typedef `%s'.", v18);
    default:
      if ( dword_46D448 )
        v17 = (const char *)sub_21B3C4(a3);
      else
        v17 = *(const char **)a3;
      sub_946E0("Cannot find value of botched symbol `%s'.", v17);
  }
  return result;
}
