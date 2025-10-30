bool __fastcall sub_26880(pthread_mutex_t *a1, int a2)
{
  int v3; // r0
  size_t v4; // r0
  char v8[12]; // [sp+8h] [bp-200Ch] BYREF
  int v9; // [sp+2008h] [bp-Ch]

  if ( !sub_65FEC(a2, "id") )
    return 0;
  v3 = sub_65FEC(a2, "id");
  v9 = sub_67C98(v3);
  sprintf(v8, "{\"id\": %d, \"result\": \"pong\", \"error\": null}", v9);
  v4 = strlen(v8);
  return sub_22CF8(a1, v8, v4);
}
