int __fastcall sub_D1E24(int a1, int a2)
{
  __int64 v4; // r4
  const char *v5; // r0
  int result; // r0

  switch ( *(_DWORD *)(a1 + 12) )
  {
    case 6:
    case 7:
      sub_2594B0(a2, "watch");
      goto LABEL_3;
    case 8:
      sub_2594B0(a2, "rwatch");
      goto LABEL_3;
    case 9:
      sub_2594B0(a2, "awatch");
LABEL_3:
      sub_2594B0(a2, " %s", *(const char **)(a1 + 136));
      result = sub_D1C8C(a1, a2);
      break;
    default:
      v4 = sub_94700((int)"breakpoint.c", 10395, "Invalid watchpoint type.");
      v5 = (const char *)((int (__fastcall *)(_DWORD))loc_19D228)(*(_DWORD *)(v4 + 76));
      sub_2594B0(HIDWORD(v4), "dprintf %s,%s", v5, *(const char **)(v4 + 104));
      result = sub_D1C8C(v4, SHIDWORD(v4));
      break;
  }
  return result;
}
