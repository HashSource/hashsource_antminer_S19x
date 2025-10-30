int __fastcall sub_23DC80(int a1)
{
  int v1; // r4
  int v2; // r5
  void *v3; // r0
  int result; // r0

  if ( dword_4878EC == dword_475848 && qword_4878F0 == qword_47584C )
    sub_946E0("No thread selected");
  v1 = sub_9360C(a1);
  v2 = ((int (*)(void))loc_23DBE4)();
  v3 = *(void **)(v2 + 32);
  if ( v3 )
    free(v3);
  result = v1;
  if ( v1 )
    result = sub_327254(v1);
  *(_DWORD *)(v2 + 32) = result;
  return result;
}
