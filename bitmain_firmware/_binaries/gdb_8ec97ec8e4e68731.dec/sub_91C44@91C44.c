char *__fastcall sub_91C44(int a1)
{
  int v1; // r4
  int v3; // r0
  int v4; // r3
  int v5; // lr
  __int64 v6; // r0

  switch ( a1 )
  {
    case 1:
      return "Branch Trace Store";
    case 0:
      return "No or unknown format";
    case 2:
      return "Intel Processor Trace";
  }
  v3 = sub_94700("common/btrace-common.c", 41, "Unknown branch trace format");
  switch ( v3 )
  {
    case 1:
      return "bts";
    case 0:
      return "unknown";
    case 2:
      return "pt";
  }
  v6 = sub_94700("common/btrace-common.c", 61, "Unknown branch trace format", v4, v1, v5);
  return (char *)sub_91CEC(v6, HIDWORD(v6));
}
