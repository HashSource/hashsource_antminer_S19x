int __fastcall sub_ED5C8(const char *a1, int a2)
{
  size_t v4; // r0
  const char *v5; // r4
  const char *v6; // r3

  v4 = strlen(a1);
  v5 = &a1[v4];
  switch ( a2 )
  {
    case 10:
      v6 = "ENCRYPTED";
      break;
    case 30:
      v6 = "MIC-CLEAR";
      break;
    case 20:
      v6 = "MIC-ONLY";
      break;
    default:
      v6 = "BAD-TYPE";
      break;
  }
  return sub_B5560(v5, 1024 - v4, "Proc-Type: 4,%s\n", v6);
}
