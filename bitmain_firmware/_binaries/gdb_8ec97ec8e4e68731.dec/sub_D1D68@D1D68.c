int __fastcall sub_D1D68(int a1, int a2)
{
  int v2; // r3
  char v6[44]; // [sp+0h] [bp-2Ch] BYREF

  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 == 8 )
  {
    sub_2594B0(a2, "rwatch");
    goto LABEL_6;
  }
  if ( v2 != 9 )
  {
    if ( v2 == 7 )
    {
      sub_2594B0(a2, "watch");
      goto LABEL_6;
    }
    sub_94700((int)"breakpoint.c", 10588, "Invalid hardware watchpoint type.");
  }
  sub_2594B0(a2, "awatch");
LABEL_6:
  sprintf(v6, "%08lx", *(_DWORD *)(a1 + 216));
  sub_2594B0(a2, " %s mask 0x%s", *(const char **)(a1 + 136), v6);
  return sub_D1C8C(a1, a2);
}
