void sub_26AA18()
{
  int *v0; // r3

  v0 = &dword_46DEB0;
  if ( dword_46DEB0 < -1 )
  {
    sub_94700(
      (int)"value.c",
      975,
      "%s: Assertion `%s' failed.",
      "void set_max_value_size(const char*, int, cmd_list_element*)",
      "max_value_size == -1 || max_value_size >= 0");
LABEL_5:
    *v0 = 16;
    sub_946E0("max-value-size set too low, increasing to %d bytes", 16);
  }
  if ( (unsigned int)dword_46DEB0 <= 0xF )
    goto LABEL_5;
}
