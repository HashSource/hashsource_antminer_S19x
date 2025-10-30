int sub_1D7EEC()
{
  int result; // r0

  sub_533F8(
    "btrace",
    10,
    (int)sub_1D4758,
    (int)"Start branch trace recording.",
    &unk_488080,
    (int)"record btrace ",
    0,
    &dword_487D58);
  sub_54724((int)"b", (unsigned __int8 *)"btrace", 10, 1, (int *)&dword_487D58);
  sub_53274(
    "bts",
    10,
    (int)sub_1D46A4,
    (int)"Start branch trace recording in Branch Trace Store (BTS) format.\n"
         "\n"
         "The processor stores a from/to record for each branch into a cyclic buffer.\n"
         "This format may not be available on all processors.",
    (int **)&unk_488080);
  sub_54724((int)"bts", "btrace bts", 10, 1, (int *)&dword_487D58);
  sub_53274(
    "pt",
    10,
    (int)sub_1D45F0,
    (int)"Start branch trace recording in Intel Processor Trace format.\n"
         "\n"
         "This format may not be available on all processors.",
    (int **)&unk_488080);
  sub_54724((int)"pt", "btrace pt", 10, 1, (int *)&dword_487D58);
  sub_533F8(
    "btrace",
    4,
    (int)sub_1D44F4,
    (int)"Set record options",
    &dword_487D88,
    (int)"set record btrace ",
    0,
    (int **)&dword_487D54);
  sub_533F8(
    "btrace",
    4,
    (int)sub_1D44DC,
    (int)"Show record options",
    &dword_487D84,
    (int)"show record btrace ",
    0,
    (int **)&dword_487D50);
  sub_534EC(
    "replay-memory-access",
    -1,
    (int)off_3D03A0,
    (int)&off_46DAB4,
    "Set what memory accesses are allowed during replay.",
    "Show what memory accesses are allowed during replay.",
    "Default is READ-ONLY.\n"
    "\n"
    "The btrace record target does not trace data.\n"
    "The memory therefore corresponds to the live target and not to the current replay position.\n"
    "\n"
    "When READ-ONLY, allow accesses to read-only memory during replay.\n"
    "When READ-WRITE, allow accesses to read-only and read-write memory during replay.",
    0,
    (int)sub_1D450C,
    (int **)&dword_487D88,
    (int **)&dword_487D84);
  sub_533F8(
    "bts",
    4,
    (int)sub_1D4570,
    (int)"Set record btrace bts options",
    &dword_487D90,
    (int)"set record btrace bts ",
    0,
    (int **)&dword_487D88);
  sub_533F8(
    "bts",
    4,
    (int)sub_1D44C4,
    (int)"Show record btrace bts options",
    &dword_487D80,
    (int)"show record btrace bts ",
    0,
    (int **)&dword_487D84);
  sub_5380C(
    "buffer-size",
    -1,
    (int)&dword_487D70,
    "Set the record/replay bts buffer size.",
    "Show the record/replay bts buffer size.",
    "When starting recording request a trace buffer of this size.  The actual buffer size may differ from the requested s"
    "ize.  Use \"info record\" to see the actual buffer size.\n"
    "\n"
    "Bigger buffers allow longer recording but also take more time to process the recorded execution trace.\n"
    "\n"
    "The trace buffer size may not be changed while recording.",
    0,
    (int)sub_1D449C,
    (int **)&dword_487D90,
    (int **)&dword_487D80);
  sub_533F8(
    "pt",
    4,
    (int)sub_1D4534,
    (int)"Set record btrace pt options",
    &dword_487D8C,
    (int)"set record btrace pt ",
    0,
    (int **)&dword_487D88);
  sub_533F8(
    "pt",
    4,
    (int)sub_1D44AC,
    (int)"Show record btrace pt options",
    &dword_487D7C,
    (int)"show record btrace pt ",
    0,
    (int **)&dword_487D84);
  sub_5380C(
    "buffer-size",
    -1,
    (int)&dword_487D74,
    "Set the record/replay pt buffer size.",
    "Show the record/replay pt buffer size.",
    "Bigger buffers allow longer recording but also take more time to process the recorded execution.\n"
    "The actual buffer size may differ from the requested size.  Use \"info record\" to see the actual buffer size.",
    0,
    (int)sub_1D448C,
    (int **)&dword_487D8C,
    (int **)&dword_487D7C);
  dword_487DA0 = (int)"record-btrace";
  dword_487DA4 = (int)"Branch tracing target";
  dword_487DA8 = (int)"Collect control-flow trace and provide the execution history.";
  dword_487DB0 = (int)sub_1D7DAC;
  dword_487DB8 = (int)sub_1D6C84;
  dword_487EFC = (int)sub_1D6C48;
  dword_487DC4 = (int)&loc_1D39C8;
  dword_487DC8 = (int)sub_1D6C1C;
  dword_487E90 = (int)&loc_1D3A64;
  dword_487E58 = (int)&loc_1D3AF4;
  dword_488028 = (int)sub_1D6BA4;
  dword_48802C = (int)sub_1D693C;
  dword_488050 = (int)sub_1D66E8;
  dword_488054 = (int)sub_1D6644;
  dword_488058 = (int)sub_1D64F0;
  dword_48805C = (int)sub_1D5E74;
  dword_488060 = (int)sub_1D5DD0;
  dword_488064 = (int)sub_1D5C7C;
  dword_488024 = (int)sub_1D45AC;
  dword_488038 = (int)sub_1D5110;
  dword_48803C = (int)sub_1D52F0;
  dword_488040 = (int)sub_1D4AA0;
  dword_487F20 = (int)sub_1D5328;
  dword_487DEC = (int)sub_1D4930;
  dword_487DE8 = (int)sub_1D487C;
  dword_487DD8 = (int)&loc_1D4FF8;
  dword_487DDC = (int)&loc_1D7108;
  dword_487DE0 = (int)sub_1D528C;
  dword_48806C = (int)sub_1D409C;
  dword_488070 = (int)sub_1D40A8;
  dword_487DCC = (int)&loc_1D552C;
  dword_487DD0 = (int)sub_1D70C4;
  dword_487DD4 = (int)sub_1D7404;
  dword_487EB8 = (int)sub_1D5440;
  dword_487EA4 = (int)sub_1D525C;
  dword_487EA0 = (int)sub_1D51FC;
  dword_488044 = (int)sub_1D73A0;
  dword_488048 = (int)sub_1D738C;
  dword_48804C = (int)sub_1D7314;
  dword_487F44 = (int)sub_1D40B4;
  dword_487DF8 = (int)sub_1D7034;
  dword_487DFC = (int)sub_1D518C;
  dword_487F48 = (int)sub_1D40BC;
  dword_488074 = (int)sub_1D40CC;
  dword_488078 = (int)sub_1D40E0;
  dword_487DF0 = (int)sub_1D707C;
  dword_487DF4 = (int)sub_1D51C4;
  dword_487ED4 = 4;
  dword_48807C = 3840;
  sub_22EEB0(algn_487D9C);
  result = sub_323AE0(50, sub_1D4070, sub_1D4084, 0, sub_93094, sub_1D445C);
  dword_487D78 = result;
  *(_QWORD *)&dword_487D70 = 0x400000010000LL;
  return result;
}
