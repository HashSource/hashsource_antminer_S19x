int __fastcall sub_257C6C(int a1)
{
  int v1; // r4
  int *v2; // r6
  int v3; // r5
  int v4; // r5
  _DWORD *v5; // r0
  int result; // r0
  int i; // r4
  _DWORD *v8; // r0

  v1 = sub_B894C(a1);
  v2 = (int *)((int (__fastcall *)(int, int))loc_16EC88)(v1, dword_48A9A8);
  v3 = ((int (__fastcall *)(int))loc_166E9C)(v1);
  v4 = v3 + ((int (__fastcall *)(int))loc_166F48)(v1);
  v5 = (_DWORD *)sub_242F8C();
  result = sub_2594B0(*v5, " %-11s %3s\n", "Name", "Nr");
  for ( i = *v2; i; ++v4 )
  {
    v8 = (_DWORD *)sub_242F8C();
    result = sub_2594B0(*v8, " %-11s %3d\n", *(const char **)i, v4);
    i = *(_DWORD *)(i + 12);
  }
  return result;
}
