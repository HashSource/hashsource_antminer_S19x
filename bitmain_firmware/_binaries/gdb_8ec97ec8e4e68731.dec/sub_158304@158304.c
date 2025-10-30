int __fastcall sub_158304(int *a1, int a2)
{
  int v2; // r4
  int (__fastcall *v3)(int, int *, int, int *); // r5
  int v5; // [sp+Ch] [bp-8h] BYREF

  v2 = *a1;
  v5 = 0;
  v3 = *(int (__fastcall **)(int, int *, int, int *))(*(_DWORD *)(v2 + 28) + 68);
  if ( !v3 )
  {
    sub_94700(
      (int)"extension.c",
      955,
      "%s: Assertion `%s' failed.",
      "type** get_xmethod_arg_types(xmethod_worker*, int*)",
      "extlang->ops->get_xmethod_arg_types != NULL");
LABEL_5:
    sub_946E0("Error while looking for arg types of a xmethod worker defined in %s.", *(const char **)(v2 + 8));
  }
  if ( v3(v2, a1, a2, &v5) == 2 )
    goto LABEL_5;
  return v5;
}
