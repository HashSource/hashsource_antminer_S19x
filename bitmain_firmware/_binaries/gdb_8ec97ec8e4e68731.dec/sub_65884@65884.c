int __fastcall sub_65884(int a1, const char **a2, int a3)
{
  int v3; // r0
  int v4; // r4
  int v6; // r5
  int *v7; // r0
  int v8; // r0
  int v9; // [sp+4h] [bp-8h] BYREF

  if ( a3 != 1 )
    sub_946E0("-remove-inferior should be passed a single argument");
  if ( sscanf(*a2, "i%d", &v9) != 1 )
    sub_946E0("the thread group id is syntactically invalid");
  v3 = sub_1839F8(v9);
  v4 = v3;
  if ( !v3 )
    sub_946E0("the specified thread group does not exist");
  if ( *(_DWORD *)(v3 + 12) )
    sub_946E0("cannot remove an active inferior");
  if ( v3 != sub_183688(v3) )
    return sub_1848E4(v4);
  v6 = sub_183B38(sub_62EA4, 0);
  if ( !v6 )
    sub_946E0("Cannot remove last inferior");
  ((void (*)(void))loc_183698)();
  if ( *(_DWORD *)(v6 + 12) && (v8 = ((int (*)(void))loc_23E730)()) != 0 )
    v7 = (int *)(v8 + 8);
  else
    v7 = &dword_475848;
  sub_23F9F0(*v7, v7[1], v7[2]);
  ((void (__fastcall *)(_DWORD))loc_1CD290)(*(_DWORD *)(v6 + 36));
  return sub_1848E4(v4);
}
