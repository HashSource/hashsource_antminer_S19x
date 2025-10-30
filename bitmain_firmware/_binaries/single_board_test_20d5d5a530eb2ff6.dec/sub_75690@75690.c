const char *sub_75690()
{
  const char *result; // r0
  _BYTE v1[5]; // [sp+7h] [bp-5h] BYREF

  if ( sub_75638(v1) )
    return "NOSNGOT0000000000";
  result = "NOSNGOT0000000000";
  if ( v1[0] )
    return (const char *)dword_65E470;
  return result;
}
