void __fastcall sub_3B864(_DWORD *a1)
{
  void *v2; // r0
  char v3[52]; // [sp+0h] [bp-34h] BYREF

  if ( a1 && (v2 = (void *)a1[75]) != 0 )
  {
    free(v2);
    j_free(a1);
  }
  else
  {
    sub_1E938(v3, 0x30u);
    printf("%s ", v3);
    printf("%s : edf_v5_destroy: input arg wrong\n", "edf_v5_destroy");
    strcpy(&byte_62DC68[20480], "edf_v5_destroy: input arg wrong");
    sub_3CC5C(&byte_62DC68[20480], v3);
  }
}
