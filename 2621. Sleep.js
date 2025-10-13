function action(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
}

async function sleep(millis) {
    await action(millis);
}
