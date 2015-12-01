GOOD MSG 1 (standard):
http POST http://amani.dev/amani/sms message="17052015 Pierre A F H 13 I A young woman was attacked by a gang in Wau at nighttime. She did not report the incident to police out of fear for her safety." message_id="68a937e0-9ab9-4314-bf4a-1863d8ac0850" device_id="" from="+16046794080" sent_to="" sent_timestamp="1428861180000" secret="123qwe"
GOOD MSG 2 (testing multiple values for one token - notice the A is now F):
http POST http://amani.dev/amani/sms message="17052015 Pierre F F H 13 I A young woman was attacked by a gang in Wau at nighttime. She did not report the incident to police out of fear for her safety." message_id="68a937e0-9ab9-4314-bf4a-1863d8ac0850" device_id="" from="+16046794080" sent_to="" sent_timestamp="1428861180000" secret="123qwe"
BAD MSG 1 (not enough tokens):
http POST http://amani.dev/amani/sms message="A F H 13 I. A young woman was attacked by a gang in Wau at nighttime. She did not report the incident to police out of fear for her safety." message_id="68a937e0-9ab9-4314-bf4a-1863d8ac0850" device_id="" from="+16046794080" sent_to="" sent_timestamp="1428861180000" secret="123qwe"
