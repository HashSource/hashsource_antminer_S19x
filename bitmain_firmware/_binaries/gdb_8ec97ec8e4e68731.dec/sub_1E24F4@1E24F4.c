int __fastcall sub_1E24F4(int a1, _DWORD *a2, int a3, int a4)
{
  int result; // r0
  char *v6; // r3
  void *v7; // r0
  void *ptr; // [sp+4h] [bp-4h] BYREF

  if ( dword_488B44 == 1 )
LABEL_18:
    sub_946E0("Target does not support branch tracing.");
  if ( !dword_488B44 )
    goto LABEL_5;
  if ( dword_488B44 != 2 )
  {
    ((void (*)(void))loc_162E4)();
    goto LABEL_18;
  }
  if ( dword_488B48 != 1 )
    goto LABEL_18;
LABEL_5:
  if ( a4 == 1 )
  {
    v6 = "new";
  }
  else if ( a4 )
  {
    if ( a4 != 2 )
    {
      sub_94700((int)"remote.c", 13391, "Bad branch tracing read type: %u.", a4);
      v7 = ptr;
      if ( ptr )
        free(ptr);
      sub_338FFC(v7);
    }
    v6 = "delta";
  }
  else
  {
    v6 = "all";
  }
  sub_230590(&ptr, &dword_4899A0, 23, v6);
  if ( !ptr )
    return 1;
  sub_E15F0(a2, (int)ptr);
  result = (int)ptr;
  if ( ptr )
  {
    free(ptr);
    return 0;
  }
  return result;
}
