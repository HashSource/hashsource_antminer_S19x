void __fastcall sub_9CE7C(int a1, int a2, _DWORD *a3)
{
  int v6; // r6
  const char *v7; // r1
  char *v8; // r4
  const char *v9; // r3
  _BYTE v10[20]; // [sp+4h] [bp-50h] BYREF
  int v11; // [sp+18h] [bp-3Ch]

  v6 = *(_DWORD *)sub_242FDC(a1);
  sub_2665F0(v10);
  if ( v11 )
  {
    sub_B7694(4);
    sub_257630(v6, "addr", *(_DWORD *)(*(_DWORD *)(a2 + 28) + 44), *(_DWORD *)(*(_DWORD *)(a2 + 28) + 52));
  }
  sub_B7694(5);
  *a3 = *(_DWORD *)(a2 + 28);
  switch ( a1 )
  {
    case 2:
      sub_2575E8(v6, "what", "failed Ada assertions");
      break;
    case 3:
      v9 = *(const char **)(a2 + 136);
      if ( v9 )
        sub_257694(v6, "what", "`%s' Ada exception handlers", v9);
      else
        sub_2575E8(v6, "what", "all Ada exceptions handlers");
      break;
    case 1:
      sub_2575E8(v6, "what", "unhandled Ada exceptions");
      break;
    default:
      v7 = *(const char **)(a2 + 136);
      if ( v7 )
      {
        v8 = sub_93140("`%s' Ada exception", v7);
        sub_2575E8(v6, "what", v8);
        if ( v8 )
          free(v8);
      }
      else
      {
        sub_2575E8(v6, "what", "all Ada exceptions");
      }
      break;
  }
}
