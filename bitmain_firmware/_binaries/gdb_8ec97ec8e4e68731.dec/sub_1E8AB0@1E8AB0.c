int __fastcall sub_1E8AB0(int a1)
{
  int v2; // r0
  int v3; // r4
  int result; // r0
  char *v5; // r6
  size_t v6; // r0

  v2 = sub_16F654(a1);
  ((void (__fastcall *)(int))loc_1E2770)(v2);
  v3 = dword_488C94;
  if ( ((int (__fastcall *)(int))loc_1E2198)(72) == 1 )
  {
    v5 = *(char **)v3;
    v6 = sub_1E2890(1);
    sub_93170(v5, v6, "D;%x", a1);
  }
  else
  {
    **(_WORD **)v3 = 68;
  }
  sub_1E7DEC(*(const char **)v3);
  result = sub_1E4EB8((char **)v3, (size_t *)(v3 + 4), 0, 0, 0);
  if ( **(_BYTE **)v3 != 79 )
  {
    if ( !**(_BYTE **)v3 )
      sub_946E0("Remote doesn't know how to detach");
LABEL_7:
    sub_946E0("Can't detach process.");
  }
  if ( *(_BYTE *)(*(_DWORD *)v3 + 1) != 75 )
    goto LABEL_7;
  return result;
}
