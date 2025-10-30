int sub_178E4()
{
  void *ptr; // [sp+0h] [bp-1Ch] BYREF
  int v2; // [sp+4h] [bp-18h]
  _BYTE v3[20]; // [sp+8h] [bp-14h] BYREF

  sub_2351A8(&ptr, "bool");
  dword_48A294 = (int)&off_3E9AD4;
  dword_48A298 = (int)&unk_48A2A0;
  sub_2350F8(&dword_48A298, ptr, (char *)ptr + v2);
  dword_48A2B0 = 0;
  dword_48A294 = (int)off_3E9AEC;
  if ( ptr != v3 )
    sub_339E64(ptr);
  sub_2351A8(&ptr, "int8");
  dword_48A2B8 = (int)&unk_48A2C0;
  dword_48A2B4 = (int)&off_3E9AD4;
  sub_2350F8(&dword_48A2B8, ptr, (char *)ptr + v2);
  dword_48A2B4 = (int)off_3E9AEC;
  dword_48A2D0 = 1;
  if ( ptr != v3 )
    sub_339E64(ptr);
  sub_2351A8(&ptr, "int16");
  dword_48A2D8 = (int)&unk_48A2E0;
  dword_48A2D4 = (int)&off_3E9AD4;
  sub_2350F8(&dword_48A2D8, ptr, (char *)ptr + v2);
  dword_48A2D4 = (int)off_3E9AEC;
  dword_48A2F0 = 2;
  if ( ptr != v3 )
    sub_339E64(ptr);
  sub_2351A8(&ptr, "int32");
  dword_48A2F8 = (int)&unk_48A300;
  dword_48A2F4 = (int)&off_3E9AD4;
  sub_2350F8(&dword_48A2F8, ptr, (char *)ptr + v2);
  dword_48A2F4 = (int)off_3E9AEC;
  dword_48A310 = 3;
  if ( ptr != v3 )
    sub_339E64(ptr);
  sub_2351A8(&ptr, "int64");
  dword_48A318 = (int)&unk_48A320;
  dword_48A314 = (int)&off_3E9AD4;
  sub_2350F8(&dword_48A318, ptr, (char *)ptr + v2);
  dword_48A314 = (int)off_3E9AEC;
  dword_48A330 = 4;
  if ( ptr != v3 )
    sub_339E64(ptr);
  sub_2351A8(&ptr, "int128");
  dword_48A338 = (int)&unk_48A340;
  dword_48A334 = (int)&off_3E9AD4;
  sub_2350F8(&dword_48A338, ptr, (char *)ptr + v2);
  dword_48A334 = (int)off_3E9AEC;
  dword_48A350 = 5;
  if ( ptr != v3 )
    sub_339E64(ptr);
  sub_2351A8(&ptr, "uint8");
  dword_48A358 = (int)&unk_48A360;
  dword_48A354 = (int)&off_3E9AD4;
  sub_2350F8(&dword_48A358, ptr, (char *)ptr + v2);
  dword_48A354 = (int)off_3E9AEC;
  dword_48A370 = 6;
  if ( ptr != v3 )
    sub_339E64(ptr);
  sub_2351A8(&ptr, "uint16");
  dword_48A378 = (int)&unk_48A380;
  dword_48A374 = (int)&off_3E9AD4;
  sub_2350F8(&dword_48A378, ptr, (char *)ptr + v2);
  dword_48A374 = (int)off_3E9AEC;
  dword_48A390 = 7;
  if ( ptr != v3 )
    sub_339E64(ptr);
  sub_2351A8(&ptr, "uint32");
  dword_48A398 = (int)&unk_48A3A0;
  dword_48A394 = (int)&off_3E9AD4;
  sub_2350F8(&dword_48A398, ptr, (char *)ptr + v2);
  dword_48A394 = (int)off_3E9AEC;
  dword_48A3B0 = 8;
  if ( ptr != v3 )
    sub_339E64(ptr);
  sub_2351A8(&ptr, "uint64");
  dword_48A3B8 = (int)&unk_48A3C0;
  dword_48A3B4 = (int)&off_3E9AD4;
  sub_2350F8(&dword_48A3B8, ptr, (char *)ptr + v2);
  dword_48A3B4 = (int)off_3E9AEC;
  dword_48A3D0 = 9;
  if ( ptr != v3 )
    sub_339E64(ptr);
  sub_2351A8(&ptr, "uint128");
  dword_48A3D8 = (int)&unk_48A3E0;
  dword_48A3D4 = (int)&off_3E9AD4;
  sub_2350F8(&dword_48A3D8, ptr, (char *)ptr + v2);
  dword_48A3D4 = (int)off_3E9AEC;
  dword_48A3F0 = 10;
  if ( ptr != v3 )
    sub_339E64(ptr);
  sub_2351A8(&ptr, "code_ptr");
  dword_48A3F8 = (int)&unk_48A400;
  dword_48A3F4 = (int)&off_3E9AD4;
  sub_2350F8(&dword_48A3F8, ptr, (char *)ptr + v2);
  dword_48A3F4 = (int)off_3E9AEC;
  dword_48A410 = 11;
  if ( ptr != v3 )
    sub_339E64(ptr);
  sub_2351A8(&ptr, "data_ptr");
  dword_48A418 = (int)&unk_48A420;
  dword_48A414 = (int)&off_3E9AD4;
  sub_2350F8(&dword_48A418, ptr, (char *)ptr + v2);
  dword_48A414 = (int)off_3E9AEC;
  dword_48A430 = 12;
  if ( ptr != v3 )
    sub_339E64(ptr);
  sub_2351A8(&ptr, "ieee_single");
  dword_48A438 = (int)&unk_48A440;
  dword_48A434 = (int)&off_3E9AD4;
  sub_2350F8(&dword_48A438, ptr, (char *)ptr + v2);
  dword_48A434 = (int)off_3E9AEC;
  dword_48A450 = 13;
  if ( ptr != v3 )
    sub_339E64(ptr);
  sub_2351A8(&ptr, "ieee_double");
  dword_48A458 = (int)&unk_48A460;
  dword_48A454 = (int)&off_3E9AD4;
  sub_2350F8(&dword_48A458, ptr, (char *)ptr + v2);
  dword_48A454 = (int)off_3E9AEC;
  dword_48A470 = 14;
  if ( ptr != v3 )
    sub_339E64(ptr);
  sub_2351A8(&ptr, "arm_fpa_ext");
  dword_48A478 = (int)&unk_48A480;
  dword_48A474 = (int)&off_3E9AD4;
  sub_2350F8(&dword_48A478, ptr, (char *)ptr + v2);
  dword_48A474 = (int)off_3E9AEC;
  dword_48A490 = 15;
  if ( ptr != v3 )
    sub_339E64(ptr);
  sub_2351A8(&ptr, "i387_ext");
  dword_48A498 = (int)&unk_48A4A0;
  dword_48A494 = (int)&off_3E9AD4;
  sub_2350F8(&dword_48A498, ptr, (char *)ptr + v2);
  dword_48A494 = (int)off_3E9AEC;
  dword_48A4B0 = 16;
  if ( ptr != v3 )
    sub_339E64(ptr);
  _aeabi_atexit(0, (void (*)(void *))sub_234A94);
  dword_48A4C4 = 0;
  dword_48A4C8 = 0;
  dword_48A4CC = 0;
  return _aeabi_atexit(&dword_48A4C4, (void (*)(void *))sub_238CFC);
}
