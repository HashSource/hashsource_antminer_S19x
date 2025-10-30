int __fastcall sub_26FDF0(int a1)
{
  int v1; // r3
  int v2; // r4
  int result; // r0
  int (__fastcall *v4)(int); // r3

  v1 = *(_DWORD *)(a1 + 104);
  v2 = a1;
  result = *(_DWORD *)(v1 + 40);
  if ( result != v2 )
  {
    while ( 1 )
    {
      v4 = *(int (__fastcall **)(int))(*(_DWORD *)(v1 + 36) + 36);
      if ( !v4 )
      {
        sub_94700(
          (int)"varobj.c",
          925,
          "%s: Assertion `%s' failed.",
          "bool is_path_expr_parent(const varobj*)",
          "var->root->lang_ops->is_path_expr_parent != NULL");
        JUMPOUT(0x26FE7C);
      }
      if ( v4(v2) )
        break;
      v2 = *(_DWORD *)(v2 + 88);
      v1 = *(_DWORD *)(v2 + 104);
      result = *(_DWORD *)(v1 + 40);
      if ( v2 == result )
        return result;
    }
    return v2;
  }
  return result;
}
